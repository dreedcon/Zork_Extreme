#include <iostream>
#include <string>
#include <stdlib.h>

#include "Extra_Content.h"

using namespace std;

int main()
{

	system("color A9");
	string write;
	bool flag = true;

	printf("\n\n Welcome to Zork_Extreme You are in World, where many dangers will occur and     will die , but death is passing here , whether that luck with you .\n\n\t");


	//contruimos las habitaciones
	Father* kitchen = new Room(KITCHEN);
	Father* Hall = new Room(HALL);

	//lo mismo pero en las posiciones Kitchen
	Father* Position = new Look(NORTH);
	Father* Position1 = new Look(EAST);
	Father* Position2 = new Look(WEST);
	Father* Position3 = new Look(SOUTH);

	//lo mismo pero en las posiciones Hall
	Father* Position4 = new Look(NORTH);
	Father* Position5 = new Look(EAST);
	Father* Position6 = new Look(WEST);
	Father* Position7 = new Look(SOUTH);

	//salida de la cocina y entrada
	Father* Position_Exit = new Look(EXIT);
	Father* Position_Enter = new Look(ENTER);

	//salida de la cocina y entrada
	Father* Position_Exit1 = new Look(EXIT);
	Father* Position_Enter2 = new Look(ENTER);


	//construimos the room kitchen 
	kitchen->room;
	kitchen->info = { "\n these in the kitchen, it will find food, water, utensils and maybe help" };

	//construimos the room hall
	Hall->room;
	Hall->info = { "\n these at the Hall do not see much, you see that there is a door and a window" };

	printf("%s, \n\n", kitchen->info); //imprimimos la room

	//construimos las posiciones

	//kitchen all Positions\\
		//north kithcen
	Position->look;
	Position->info = { "\n at north, you see that there is a sink, two tomatoes and a canteen \n" };

	//east kitchen, exit and enter to hall 
	Position1->look;
	Position_Exit->look;
	Position_Enter->look;
	Position1->info = { "\n at the east you see this off the kitchen \n" };//exit Kitchen
	Position_Exit->info = { "\n exit the kitchen? " };
	Position_Enter->info = { Hall->info };

	//west kitchen
	Position2->look;
	Position2->info = { "\n nothing special" };

	//south kitchen
	Position3->look;
	Position3->info = { "\n you see a window, but is close" };

	//Hall all position\\
		//north Hall
	Position4->look;
	Position4->info = { "\n you see a stair" };



	//impresion de las posiciones de la room Kitchen

	
	
	while (flag)
	{
		cin >> write;

		if (write == "north")
		{
			printf("%s, \n\n", Position->info); //imprimimos la descripcion de la posicion
		}
		else if (write == "west")
		{
			printf("%s \n\n", Position2->info); //imprimimos la descripcion de la posicion
		}
		else if (write == "south")
		{
			printf("%s \n\n", Position3->info); //imprimimos la descripcion de la posicion

		}

		else if (write == "east")
		{
			printf("%s, \n\n", Position1->info);
			printf("%s, \n\n", Position_Exit->info);
		}

		else if (write == "exit")
		{
			printf("\n extit the kitchen.\n ");
			printf("%s, \n\n", Position_Enter->info);
		}
		
		//comando para cerrar
		else if (write == "quit")
		{
			flag = false;
			system("pause");
		}
		
		else
		{
			printf("\n no te entiendo");
		}
	
		
	
	}

	
	



}

