/*
 * FotoScherm.h
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#ifndef FOTOSCHERM_H_
#define FOTOSCHERM_H_


//voor fotoscherm gebruiken we een Screen, Label, Image en Font
#include <MAUtil/Moblet.h>
#include <MAUI/Screen.h>
#include <MAUI/Label.h>
#include <MAUI/Image.h>
#include <MAUI/Font.h>

//standaard library om plaatjes in te laden, schermgrootte op te halen, etc.
#include <ma.h>

//dit bestand wordt automatisch gemaakt als je een res.lst bestand in je project hebt.
//res.lst bevat externe bestanden (plaatjes, fonts) die je met MAHeaders.h kunt gebruiken
#include "MAHeaders.h"

//fotoscherm bevat een optiescherm
#include "OptieScherm.h"



//deze namespaces zijn nodig om niet overal MAUtil:: en MAUI:: achter bijbehorende klassen te schrijven
using namespace MAUtil;
using namespace MAUI;



//deze klasse is een Screen
class FotoScherm : public Screen
{
private:
	//bevat een optiescherm, een label voor achtergrondkleur, een label voor tekst en een image
	OptieScherm* optieScherm;

	Label* achtergrondLabel;
	Label* imageTekst;

	Image* image;

	int screenHeight;
	int screenWidth;

public:
	FotoScherm();
	virtual ~FotoScherm();

	//kan key en touch events opvangen
	void keyPressEvent(int keyCode, int nativeCode);
	void pointerPressEvent(MAPoint2d point);

	//bevat een show() functie die alle eigenschappen update bij aanroep met waarden uit OptieScherm
	void show();
};

#endif /* FOTOSCHERM_H_ */
