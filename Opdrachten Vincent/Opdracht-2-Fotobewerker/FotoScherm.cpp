/*
 * FotoScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "FotoScherm.h"
#include <conprint.h>


FotoScherm::FotoScherm()
{
	//het optiescherm
	this->optieScherm = new OptieScherm( this );

	//bepaal grootte van het scherm
	//sla schermgrootte op in globale variabelen
	MAExtent screenSize = maGetScrSize();
	this->screenWidth = EXTENT_X( screenSize );
	this->screenHeight = EXTENT_Y( screenSize );

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
	Font* font = new MAUI::Font(RES_FONT);
	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft
	this->achtergrondLabel = new Label(0, 0, screenWidth, screenHeight, NULL);

	int imageWidth = this->optieScherm->getImageWidth();
	int imageHeight = this->optieScherm->getImageHeight();

	//maak een plaatje (laden uit de resource file res.lst) en voeg label als parent toe
	this->image = new Image((screenWidth / 2) - (imageWidth / 2), (screenHeight / 2) - (imageHeight / 2), imageWidth, imageHeight, achtergrondLabel, false, false, RES_IMAGE);

	//maak tekst bij het plaatje met een label
	this->imageTekst = new Label((this->screenWidth / 2), 40, 100, 40, achtergrondLabel);
	this->imageTekst->setFont(font);
	this->imageTekst->setBackgroundColor(0x000000);

	//stel dit scherm in als het main scherm, met achtergrondlabel als de basis widget
	this->setMain( this->achtergrondLabel );
}


FotoScherm::~FotoScherm()
{

}


//show() override de show() van de super klasse (Screen), omdat we bij showen eerst opties willen ophalen
void FotoScherm::show()
{
	//roep de show() van de superklasse (Screen) aan
	this->Screen::show();

	//haal informatie achtergrondkleur op van optiescherm
	this->achtergrondLabel->setBackgroundColor( this->optieScherm->getAchtergrondOptie() );

	//haal informatie imagetekst op van optiescherm
	this->imageTekst->setCaption( this->optieScherm->getImagetekst() );

	//haal informatie afbeelding grootte op van optiescherm
	this->image->setWidth(this->optieScherm->getImageWidth());
	this->image->setHeight(this->optieScherm->getImageHeight());
}



//afvangen invoer
void FotoScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//bij indrukken van de MAK_FIRE toets, laat optiescherm zien
	if(keyCode == MAK_FIRE)
	{
		this->optieScherm->show();
	}
}

void FotoScherm::pointerPressEvent(MAPoint2d point)
{
	//bij touch, laat optiescherm zien
	this->optieScherm->show();
}


