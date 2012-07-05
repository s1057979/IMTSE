#include "SneeuwMan.hpp"

SneeuwMan::SneeuwMan( int positionX, int positionY )
{
	// init variables
	this->positionX = positionX;
	this->positionY = positionY;
}

//beweeg de sneeuwman in de richting "direcion", negatief getal is links, positief is rechts
void SneeuwMan::move( int direction )
{
	// pas de x positie aan van de sneeuwpop
	this->positionX += direction;
}

//tekent een sneeuwman
void SneeuwMan::draw()
{
	// lichaam sneeuwpop bestaat uit drie delen
	maSetColor(0xE8E8E8);
	maFillRect(this->positionX - 25, this->positionY - 50, 50, 50); //onder
	maFillRect(this->positionX - 20, this->positionY - 90, 40, 40); // midden
	maFillRect(this->positionX - 15, this->positionY - 120, 30, 30); // boven (hoofd)

	// ogen sneeuwpop bestaat uit twee delen
	maSetColor(0x000000);
	maFillRect(this->positionX - 10, this->positionY - 115, 5, 5); // oog links
	maFillRect(this->positionX + 5, this->positionY - 115, 5, 5); // oog rechts

	// mond van de sneeuwpop bestaat uit 7 delen
	maSetColor(0xFC0011);
	maFillRect(this->positionX - 10, this->positionY - 105, 3, 3); // mond hoek 1
	maFillRect(this->positionX - 7, this->positionY - 102, 3, 3); // mond hoek 2
	maFillRect(this->positionX - 4, this->positionY - 99, 3, 3); // mond recht
	maFillRect(this->positionX - 1, this->positionY - 99, 3, 3); // mond recht
	maFillRect(this->positionX + 2, this->positionY - 99, 3, 3); // mond recht
	maFillRect(this->positionX + 4, this->positionY - 102, 3, 3); // mond hoek 3
	maFillRect(this->positionX + 7, this->positionY - 105, 3, 3); // mond hoek 4

	// scherm updaten
	//maUpdateScreen();
}
