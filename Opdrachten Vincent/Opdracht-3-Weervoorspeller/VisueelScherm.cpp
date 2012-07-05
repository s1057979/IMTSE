/*
 * VisueelScherm.cpp
 *
 *  Created on: 11 mrt. 2012
 *      Author: acer
 */

#include "VisueelScherm.hpp"

VisueelScherm::VisueelScherm( WeerData* weerData )
{
	//sla de weerdata op in het attribuut
	this->weerData = weerData;

	//ken font en skin toe
	this->font = new Font(RES_FONT);
	this->skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//screem grootte onthouden
	this->screenWidth = EXTENT_X( maGetScrSize() );
	this->screenHeight = EXTENT_Y( maGetScrSize() );

	//maak een achtergrond label om alle andere widgets in op te slaan, en te tonen
	this->achtergrondLabel = new Label(0,0,0,0,NULL);
	this->achtergrondLabel->setBackgroundColor(0x000000);

	//maak een listbox met update en textueelknop
	this->listBox = (ListBox*) this->achtergrondLabel->getChildren()[0];

	//knop om data te updaten
	this->updateKnop = new Label(10,10,100,30, this->achtergrondLabel, "Update", 0, font);
	this->updateKnop->setPaddingLeft(10);
	this->updateKnop->setPaddingTop(4);
	this->updateKnop->setSkin( this->skin );

	//knop om naar visueel te schakelen
	this->textueelKnop = new Label(130,10,100,30, this->achtergrondLabel, "Textueel", 0, font);
	this->textueelKnop->setPaddingLeft(10);
	this->textueelKnop->setPaddingTop(4);
	this->textueelKnop->setSkin( this->skin );

	//label veld voor weer data, beslaat de rest van het scherm (zie onder)
	this->weerLabel = new Label(10,50,220,30, this->achtergrondLabel, "Weersvoorspelling:", 0, font);

	//maak eerst een placeholder
	this->diagramTekening = maCreatePlaceholder();

	//laat de placeholder tekenbaar zijn
	maCreateDrawableImage( this->diagramTekening, screenWidth, screenHeight - 90 );

	//mak een nieuwe image met de placeholder
	this->diagramImage = new Image( 0, 70, screenWidth, screenHeight - 30, this->achtergrondLabel, true, true, this->diagramTekening );

	this->setMain( this->achtergrondLabel );

	//update labels met text, etc.
	this->update();
}


VisueelScherm::~VisueelScherm()
{
}


void VisueelScherm::update()
{
	//update waarden vam weerdata
	weerData->update();

	//stel draw target in op onze tekening
	maSetDrawTarget( this->diagramTekening );

	//teken een staaf diagram

	//legenda, teken blokje en text met zonneschijn, neerslag en temperatuur
	maSetColor(0xFFFF00);
	maFillRect(30,194,10,10);
	this->zonLegenda = new Label(45,190,70,30, diagramImage, "Zonneschijn", 0, font);

	maSetColor(0x1B84E0);
	maFillRect(135,194,10,10);
	this->neerslagLegenda = new Label(150,190,100,30, diagramImage, "Neerslag", 0, font);

	//labels voor precenten en dagen aanduiding
	this->procentLabel = new Label(7,35,50,20, diagramImage, "100%", 0, font);
	this->nuLabel = new Label(40,145,200,20, diagramImage, "Nu", 0, font);
	this->morgenLabel = new Label(90,145,200,20, diagramImage, "Morgen", 0, font);
	this->overmorgenLabel = new Label(150,145,200,20, diagramImage, "Overmorgen", 0, font);


	//teken 10-stap lijnen
	maSetColor(0xC0C0C0);
	maFillRect(20,140,200,1);
	maFillRect(20,40,1,100);

	//teken de staven van zonneschijn, neerslag en minimum temperatuur
	maSetColor(0xFFFF00);
	maFillRect(30,140 - weerData->zonneschijn[0],20,weerData->zonneschijn[0]);
	maFillRect(95,140 - weerData->zonneschijn[1],20,weerData->zonneschijn[1]);
	maFillRect(165,140 - weerData->zonneschijn[2],20,weerData->zonneschijn[2]);

	maSetColor(0x1B84E0);
	maFillRect(50,140 - weerData->neerslag[0],20,weerData->neerslag[0]);
	maFillRect(115,140 - weerData->neerslag[1],20,weerData->neerslag[1]);
	maFillRect(185,140 - weerData->neerslag[2],20,weerData->neerslag[2]);


	//altijd draw target na tekenen teruggeven naar scherm!
	maSetDrawTarget( HANDLE_SCREEN );

	//update de image met de nieuwe tekening
	this->diagramImage->setResource( this->diagramTekening );
}



void VisueelScherm::setToggleScherm( Screen* toggleScherm )
{
	//switch naar andere scherm (textueel scherm)
	this->toggleScherm = toggleScherm;
}

void VisueelScherm::pointerPressEvent( MAPoint2d maPoint )
{
	Point point;
	point.x = maPoint.x;
	point.y = maPoint.y;

	//update knop is ingedrukt
	if( this->updateKnop->contains( point ) )
	{
		this->updateKnop->setSelected( true );
		this->update();
	}
	else
	{
		this->updateKnop->setSelected( false );
	}


	//textueel knop is ingedrukt
	if( this->textueelKnop->contains( point ) )
	{
		this->textueelKnop->setSelected( true );
		this->hide();
		this->update();
		this->toggleScherm->show();
	}
	else
	{
		this->textueelKnop->setSelected( false );
	}
}


