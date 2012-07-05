/*
 * SneeuwLandschap.cpp
 *
 *  Created on: 8 feb. 2012
 *      Author: acer
 */

#include "SneeuwLandschap.hpp"


//globale variabelen voor breedte en hoogte van het scherm
int screenWidth;
int screenHeight;


//constructor
SneeuwLandschap::SneeuwLandschap()
{
	//sla schermgrootte op in globale variabelen
	MAExtent screenSize = maGetScrSize();
	this->screenWidth = EXTENT_X( screenSize );
	this->screenHeight = EXTENT_Y( screenSize );

	//stel sneeuwhoogte in (vanaf bodem)
	this->sneeuwHoogte = 30;

	//maak een nieuwe sneeuwman
	this->sneeuwMan = new SneeuwMan( screenWidth / 2, screenHeight - this->sneeuwHoogte );

}


//wordt aangeroepen als er input is (druk op de toets, touch van scherm)
void SneeuwLandschap::run( MAEvent event )
{
	//als er een key is ingetoetst
	if( event.type == EVENT_TYPE_KEY_PRESSED )
	{
		//pak de key code
		int key = maGetKeys();

		//kijk voor linkertoets
		if( key == MAKB_LEFT )
			this->sneeuwMan->move( -6 );	//beweeg sneeuwman -6 pixels

		//kijk voor rechtertoets
		if( key == MAKB_RIGHT )
			this->sneeuwMan->move( 6 );		//beweeg sneeuwman 6 pixels
	}

	// 1000 sneeuwvlokken maken
	if(this->sneeuwVlokArray.size() < 1000)
	{
		SneeuwVlok* vlok = new SneeuwVlok(rand()%screenWidth+1, 0);
		this->sneeuwVlokArray.add(vlok);
	}

	//laat sneeuwvlokken vallen
	SneeuwVlok* vlok;
	for(MAUtil::Vector<SneeuwVlok*>::iterator itr = sneeuwVlokArray.begin(); itr != sneeuwVlokArray.end(); itr++)
	{
		vlok = *itr;
		vlok->fall(this->screenHeight - this->sneeuwHoogte);
	}
}


//wordt elke "tick" aangeroepen om het winterlandschap, sneeuwman en sneeuwvlokken te tekenen
void SneeuwLandschap::draw()
{
	//kleur de lucht blauw
	maSetColor( 0x0055ff );
	maFillRect( 0, 0, screenWidth, screenHeight );

	//maak sneeuw op de grond, a.d.h.v. sneeuwHoogte
	maSetColor( 0xffffff );
	maFillRect( 0, screenHeight - this->sneeuwHoogte, screenWidth, this->sneeuwHoogte );

	//TODO: teken de sneeuwman
	sneeuwMan->draw();


	// teken de sneeuwvlokken
	SneeuwVlok* vlok;
	for(MAUtil::Vector<SneeuwVlok*>::iterator itr = sneeuwVlokArray.begin(); itr != sneeuwVlokArray.end(); itr++){
		vlok = *itr;
		vlok->draw();
	}


}


