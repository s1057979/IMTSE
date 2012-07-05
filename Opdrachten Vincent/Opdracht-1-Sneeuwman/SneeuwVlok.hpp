/*
 * SneeuwVlok.hpp
 *
 *  Created on: 8 feb. 2012
 *      Author: acer
 */

#ifndef SNEEUWVLOK_HPP_
#define SNEEUWVLOK_HPP_


//deze header hebben we nodig voor de functie rand()
#include <mastdlib.h>


//maak een klasse SneeuwVlok
class SneeuwVlok
{
private:
	int positionX;	//sneeuwvlok heeft x positie
	int positionY;	//sneeuwvlok heeft y positie
	int size;		//sneeuwvlok heeft (een willekeurige) grootte

	bool dead;		//als dead == true, wordt de sneeuwvlok verwijdert

public:
	SneeuwVlok( int positionX, int positionY );	//constructor
	void draw();								//teken functie die een sneeuwvlok tekent
	void fall( int groundLevel );				//functie die de y positie verandert
	bool isDead();								//functie die de sneeuwvlok dead status teruggeeft
};



#endif /* SNEEUWVLOK_HPP_ */
