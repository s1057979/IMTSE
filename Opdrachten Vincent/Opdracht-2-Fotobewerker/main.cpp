

#include <MAUtil/Moblet.h>



#include "FotoBewerker.h"


//main functie
//gebruikt Moblet om events e.d. op te vangen, en gebruik te maken van MAUI userinterfaces
extern "C" int MAMain()
{
	//start een Moblet app met de FotoBewerker klasse
	Moblet::run(new FotoBewerker());
	return 0;
}


