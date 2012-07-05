/*
 * OptieScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "OptieScherm.h"
#include <conprint.h>
#include <mastdlib.h>

OptieScherm::OptieScherm( Screen* parent )
{
	//sla parent scherm op (FotoScherm) om de show() te kunnen aanroepen, zodat dit optiescherm weer gesloten wordt
	this->parent = parent;

	//sla schermgrootte op in globale variabelen
	MAExtent screenSize = maGetScrSize();
	this->screenWidth = EXTENT_X( screenSize );
	this->screenHeight = EXTENT_Y( screenSize );

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
	Font* font = new MAUI::Font(RES_FONT);
	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft
	this->container = new Label(0, 0, screenWidth, screenHeight, NULL);

	//stel achtergrondkleur in
	this->container->setBackgroundColor(0x000000);

	//maak rode knop
	this->roodLabel = new Label(0 ,10, 100,30, container);
	this->roodLabel->setBackgroundColor(0xFF0000);
	this->roodLabel->setSkin( skin );
	this->roodLabel->setCaption("Kleur Rood");
	this->roodLabel->setPaddingLeft(15);
	this->roodLabel->setPaddingTop(5);
	this->roodLabel->setFont(font);
	this->kleurLabels.add( roodLabel );	//voeg toe aan vector

	//maak groene knop
	this->groenLabel = new Label(110,10,100,30, container);
	this->groenLabel->setBackgroundColor(0xFF0000);
	this->groenLabel->setSkin( skin );
	this->groenLabel->setCaption("Kleur Groen");
	this->groenLabel->setPaddingLeft(15);
	this->groenLabel->setPaddingTop(5);
	this->groenLabel->setFont(font);
	this->kleurLabels.add( groenLabel );	//voeg toe aan vector

	//maak blauwe knop
	this->blauwLabel = new Label(220,10,100,30, container);
	this->blauwLabel->setBackgroundColor(0xFF0000);
	this->blauwLabel->setSkin( skin );
	this->blauwLabel->setCaption("Kleur Blauw");
	this->blauwLabel->setPaddingLeft(15);
	this->blauwLabel->setPaddingTop(5);
	this->blauwLabel->setFont(font);
	this->kleurLabels.add( blauwLabel );	//voeg toe aan vector

	this->applyLabel = new Label(screenWidth - 130, screenHeight - 50, 100, 30, container);
	this->applyLabel->setBackgroundColor(0xFF0000);
	this->applyLabel->setSkin( skin );
	this->applyLabel->setCaption("Aanpassen");
	this->applyLabel->setPaddingLeft(20);
	this->applyLabel->setPaddingTop(5);
	this->applyLabel->setFont(font);

	// label voor naam tekstvak te benoemen
	this->nameLabel = new Label(0, 120, 150, 30, container);
	this->nameLabel->setBackgroundColor(0x000000);
	this->nameLabel->setCaption("Naam: ");
	this->nameLabel->setFont(font);

	// label voor grootte tekstvak te benoemen
	this->sizeLabel = new Label(0, 80, 150, 30, container);
	this->sizeLabel->setBackgroundColor(0x000000);
	this->sizeLabel->setCaption("Grootte (bv. 50x50): ");
	this->sizeLabel->setFont(font);

	// standaard achtergrond kleur
	this->achtergrondKleur = 0x00C4FF;

	//stel width plaatje in m.b.v. editbox
	this->editImageWSizeBox = new EditBox(
											150, // Left.
											80, // Top (will be set by the layout).
											50, // Width.
											30, // Height.
											container, // Parent widget.
											"",    // Initial text content.
											0x555555, // Background color.
											font,  // Font.
											true,  // Respond to keypresses when selected.
											true, // Not multiline.
											60, // Max number of characters in the edit box.
											EditBox::IM_NUMBERS);  // Inhoud aangeven

	this->editImageWSizeBox->setCaption("50");

	//stel height plaatje in m.b.v. editbox
	this->editImageHSizeBox = new EditBox(
											205, // Left.
											80, // Top (will be set by the layout).
											50, // Width.
											30, // Height.
											container, // Parent widget.
											"",    // Initial text content.
											0x555555, // Background color.
											font,  // Font.
											true,  // Respond to keypresses when selected.
											true, // Not multiline.
											60, // Max number of characters in the edit box.
											EditBox::IM_NUMBERS);  // Inhoud aangeven

	this->editImageHSizeBox->setCaption("50");


	//stel naam plaatje in m.b.v. editbocx
	this->editImageNameBox = new EditBox(
										150, // Left.
										120, // Top (will be set by the layout).
										100, // Width.
										30, // Height.
										container, // Parent widget.
										"",    // Initial text content.
										0x555555, // Background color.
										font,  // Font.
										true,  // Respond to keypresses when selected.
										true, // Not multiline.
										60, // Max number of characters in the edit box.
										EditBox::IM_QWERTY);  // Inhoud aangeven
	this->editImageNameBox->setCaption("Naamloos");

	this->setMain(container);

}

OptieScherm::~OptieScherm()
{
	//verwijder objecten van deze klasse
}


//geef ingestelde achtergrondkleur terug
int OptieScherm::getAchtergrondOptie()
{
	//return achtergrond kleur
	return this->achtergrondKleur;
}


//geef ingestelde imagetekst van de editbox terug
const BasicString<char> OptieScherm::getImagetekst()
{
	//verander editBox naar jouw editboxs
	return this->editImageNameBox->getCaption(); //caption is de text in een editbox
}


int OptieScherm::getImageWidth()
{
	return atoi(this->editImageWSizeBox->getCaption().c_str());
}

int OptieScherm::getImageHeight()
{
	return atoi(this->editImageHSizeBox->getCaption().c_str());
}

void OptieScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//laat bij MAK_FIRE knop indrukken de parent (FotoScherm dus) weer zien
	if(keyCode == MAK_FIRE)
	{
		this->parent->show();
	}
}

void OptieScherm::pointerPressEvent(MAPoint2d point)
{
	Point p;
	Label* kleur;

	p.x = point.x;
	p.y = point.y;

	this->editImageNameBox->setSelected(editImageNameBox->contains(p));
	this->editImageWSizeBox->setSelected(editImageWSizeBox->contains(p));
	this->editImageHSizeBox->setSelected(editImageHSizeBox->contains(p));

	if(this->applyLabel->contains(p))
	{
		this->parent->show();
	}


	//doorloop alle kleurlabels om selectie in te stellen
	for(MAUtil::Vector<Label*>::iterator itr = this->kleurLabels.begin(); itr != this->kleurLabels.end(); itr++)
	{
		kleur = *itr;

		//verander de editBox naar je eigen editbox(en)
		if(kleur->contains(p))
		{
			if(kleur->getCaption() == "Kleur Blauw")
			{
				this->achtergrondKleur = 0x004DFF;
			}
			else if(kleur->getCaption() == "Kleur Groen")
			{
				this->achtergrondKleur = 0x2BFF00;
			}
			else
			{
				this->achtergrondKleur = 0xFF0000;;
			}
		}


		//behandel de editbox bij selecteren (touch)
		kleur->setSelected(kleur->contains(p));
	}

}

void OptieScherm::show()
{
	this->Screen::show();
}

