/*
 * TextueelScherm.cpp
 *
 *  Created on: 11 mrt. 2012
 *      Author: acer
 */

#include "TextueelScherm.hpp"

TextueelScherm::TextueelScherm( WeerData* weerData )
{
	//sla de weerdata op in het attribuut
	this->weerData = weerData;

	//ken font en skin toe
	this->font = new Font(RES_FONT);
	this->skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een achtergrond label om alle andere widgets in op te slaan, en te tonen
	this->achtergrondLabel = new Label(0,0,0,0,NULL);
	this->achtergrondLabel->setBackgroundColor(0x000000);

	//maak een listbox waar update en visueelknop aan toegevoegd worden
	this->listBox = (ListBox*) this->achtergrondLabel->getChildren()[0];

	//knop om data te updaten
	this->updateKnop = new Label(10,10,100,30, this->achtergrondLabel, "Update", 0, font);
	this->updateKnop->setPaddingLeft(10);
	this->updateKnop->setPaddingTop(4);
	this->updateKnop->setSkin( this->skin );

	//knop om naar visueel scherm te schakelen
	this->visueelKnop = new Label(130,10,100,30, this->achtergrondLabel, "Visueel", 0, font);
	this->visueelKnop->setPaddingLeft(10);
	this->visueelKnop->setPaddingTop(4);
	this->visueelKnop->setSkin( this->skin );

	//label veld voor weer data, beslaat de rest van het scherm (zie onder)
	this->weerDataLabel = new Label(10,50,220,30, this->achtergrondLabel, "De weersvoorspelling:", 0, font);
	//weerDataLabel->setSkin( this->skin );

	//info label
	this->weerInfo = new Label(10,70,220,50, this->achtergrondLabel, "", 0, font);

	//zonneschijn label
	this->weerInfoZon = new Label(10,120,220,30, this->achtergrondLabel, "", 0, font);

	//neerslag label
	this->weerInfoNeerslag = new Label(10,150,220,30, this->achtergrondLabel, "", 0, font);

	//minimum temperatuur label
	this->weerInfoMintemp = new Label(10,190,220,30, this->achtergrondLabel, "", 0, font);

	//stel achtergrond label in als main widget, en maakt alles zichtbaar
	this->setMain(this->achtergrondLabel);

	//update labels met text, etc.
	this->update();
}

TextueelScherm::~TextueelScherm()
{
}

void TextueelScherm::toonWeerData()
{

	//tijdelijke data buffer voor sprintf operaties
	char data[500];

	//stel tekst in voor info label
	sprintf( data, "					Nu	|	Morgen	|	Overmorgen" );
	this->weerInfo->setCaption(data);

	//stel tekst in voor zonneschijn label
	sprintf( data, "Zon:				%i%%	|	%i%%	|	%i%%", weerData->zonneschijn[0], weerData->zonneschijn[1], weerData->zonneschijn[2] );
	this->weerInfoZon->setCaption( data );

	//stel tekst in voor neerslag label
	sprintf( data, "Regen:		%i%%	|	%i%%	|	%i%%", weerData->neerslag[0], weerData->neerslag[1], weerData->neerslag[2]  );
	this->weerInfoNeerslag->setCaption( data );

	//stel tekst in voor minimum temperatuur label
	sprintf( data, "Temp:			%i	|	%i	|	%i", weerData->minimumtemperatuur[0], weerData->minimumtemperatuur[1], weerData->minimumtemperatuur[2]  );
	this->weerInfoMintemp->setCaption( data );

}

void TextueelScherm::setToggleScherm( Screen* toggleScherm )
{
	//switch naar andere scherm (visueel scherm)
	this->toggleScherm = toggleScherm;
}

void TextueelScherm::update()
{
	//update weerdata en geef alles weer (update labels met nieuwe data)
	this->weerData->update();
	this->toonWeerData();
}

void TextueelScherm::pointerPressEvent( MAPoint2d maPoint )
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


	//visueel knop is ingedrukt
	if( this->visueelKnop->contains( point ) )
	{
		this->visueelKnop->setSelected( true );
		this->update();
		this->toggleScherm->show();
	}
	else
	{
		this->visueelKnop->setSelected( false );
	}
}


