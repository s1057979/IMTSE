
#include "SneeuwVlok.hpp"

//constructor
SneeuwVlok::SneeuwVlok( int positionX, int positionY )
{
	// init variables
	this->positionX = positionX;
	this->positionY = positionY;

	this->size = rand()%7;
}

//teken functie die een sneeuwvlok tekent
void SneeuwVlok::draw()
{
	maSetColor(0xffffff);
	maFillRect(this->positionX, this->positionY, this->size, this->size);
}

//functie die de y positie verandert
void SneeuwVlok::fall( int groundLevel )
{
	if(this->positionY < groundLevel)
	{
		this->dead = false;
		this->positionY += 1;
	}
	else
	{
		this->dead = true;
		this->positionY  = -1;
	}
}

//functie die de sneeuwvlok dead status teruggeeft
bool SneeuwVlok::isDead()
{
	return this->dead;
}
