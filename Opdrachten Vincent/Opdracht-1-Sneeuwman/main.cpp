#include <ma.h>
#include <conprint.h>


//include sneeuwlandschap om te instantiëren en gebruiken
#include "SneeuwLandschap.hpp"


//de main functie
extern "C" int MAMain()
{
	MAEvent event;

	//nieuw sneeuwlandschap
	SneeuwLandschap* sneeuwLandschap = new SneeuwLandschap();

	//oneindige loop laat onze app in werking
	while (TRUE)
	{
		//run met 1 frame per 100 ms
		maWait(40);

		//kijk of er events hebben plaatsgevonden, sla die info op in MAEvent event.
		maGetEvent(&event);

		//als een event de app wil sluiten...
		if (EVENT_TYPE_CLOSE == event.type)
		{
			// Exit while loop.
			break;
		}

		//handel alle logica van sneeuwlandschap af
		sneeuwLandschap->run( event );

		//teken het sneeuwlandschap
		sneeuwLandschap->draw();

		//vergeet het scherm niet te updaten!
		maUpdateScreen();
	}

	return 0;
}
