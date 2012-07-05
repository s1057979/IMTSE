/*
 * OptieScherm.h
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#ifndef OPTIESCHERM_H_
#define OPTIESCHERM_H_


#include <MAUTIL/Moblet.h>
#include <MAUI/Screen.h>
#include <MAUI/Label.h>
#include <MAUI/EditBox.h>
#include <MAUI/ListBox.h>

#include <MAUTIL/Vector.h>

#include "conprint.h"

#include "MAHeaders.h"


using namespace MAUtil;
using namespace MAUI;


class OptieScherm : public Screen
{
private:
	Screen* parent;

	Label* container;

	Vector<Label*> kleurLabels;
	Label* roodLabel;
	Label* groenLabel;
	Label* blauwLabel;
	Label* applyLabel;
	Label* sizeLabel;
	Label* nameLabel;


	//todo: voeg editboxen en waardes toe die opgeslagen moeten worden
	int screenWidth;
	int screenHeight;
	int achtergrondKleur;

	EditBox* editImageHSizeBox;
	EditBox* editImageWSizeBox;
	EditBox* editImageNameBox;



public:
	OptieScherm( Screen* parent );
	virtual ~OptieScherm();

	void keyPressEvent(int keyCode, int nativeCode);
	void pointerPressEvent(MAPoint2d point);

	int getAchtergrondOptie();
	int getImageWidth(); // geeft grootte van image terug
	int getImageHeight(); // geeft grootte van image terug

	const BasicString<char>getImagetekst(); //geeft text van editbox terug

	void OptieScherm::show();
};

#endif /* OPTIESCHERM_H_ */
