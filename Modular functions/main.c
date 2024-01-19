////////////////////////////////////////////
// Developer: Jhonattan Gomez             //
//                                        //
// While creating a menu, allows the user //
// to make use of each of the modules.    //
//                                        //
////////////////////////////////////////////

#define _CRT_SECURE_NO _WARNINGS //
// Including the system libraries
#include <stdio.h> 			// Standard Input Output library


// Following there will be inclution of each module
#include "fundamentals.h"  	// Module Fundamentals
#include "manipulating.h"  	// Module Manipulation
#include "converting.h"   	// Module Converting
#include "tokenizing.h"    	// Module Tokenizing

// Here we are going to start the main function which will create the menu
int main (void)                               	
{
	char buff[10];								// Creates the array "buff" to record user's selections 
	do											// Start the 'Do' loop which will be showing the menu, again and again
	{
		printf ("1 - Fundamentals\n");			// Shows the 'Fundamentals' module option
		printf ("2 - Manipulation\n");			// Shows the 'Manipulation' module option
		printf ("3 - Converting\n");			// Shows the 'Converting' module option
		printf ("4 - Tokenizing\n");			// Shows the 'Tokenizing' module option
		printf ("0 - Exit\n");					// Shows the 'Exit' option when 0
		printf ("Which module to run? \n");		// Ask the user which option he/she/it wants
		fgets (buff, 10, stdin);				// Records the input made by the user on the 'buff' array
		switch (buff[0])						// Starts the switch conditional based on the users input
		{
		case '1': fundamentals ();				// Case running the module 'fundamentals' when the option 1 is selected
			break;									// Stops the switch, and goes back to the loop
		case '2': manipulating ();				// Case running the module 'manipulating' when the option 2 is selected
			break;									// Stops the switch, and goes back to the loop
		case '3': converting();					// Case running the module 'converting' when the option 3 is selected
			break;									// Stops the switch, and goes back to the loop
		case '4': tokenizing();					// Case running the module 'tokenizing' when the option 4 is selected
			break;									// Stops the switch, and goes back to the loop
		}
	} while (buff[0] != '0');					// The 'while' condition, which defines the condition to keep the do loop running until the selection is '0'
	return 0;									// Our marvelous '0' return to indicate that the program is finished.
}