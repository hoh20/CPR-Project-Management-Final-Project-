#define _CRT_SECURE_NO_WARNINGS //Disable deprecation warnings
#define BUFFER_SIZE 80  //Define the size of character array for store user's input string
#define NUM_INPUT_SIZE 10   //Define the size of character array for store the user's input character position
#include "fundamentals.h"  //Including the header file "fundamentals.h"

//This function is including 3 parts.  
//First part is "Indexing Strings Demo", it will ask user to enter a string and character position, it will find out the character based on the position.
//It will keep asking user to enter a new string and new character position for finding the character until user entered "q" when asking for input a no empty string.
//Second part is "Measuring Strings Demo", it will ask user to enter a string and it will find out the the length of string.
//It will keep asking user to enter a new string for finding the length of string until user entered "q"
//Third part is "Copying Strings Demo", it will ask user to enter a string and copy the string, and then display the copied string to the user
//It will keep asking user to enter a new string for copying the string until user entered "q"  

void fundamentals() {
/* Version 1 */
    printf("*** Start of Indexing Strings Demo ***\n"); //display a message to user: "*** Start of Indexing Strings Demo ***"
    char    buffer1[BUFFER_SIZE];  //buffer1 will be used for user to input a string
    char    numInput[NUM_INPUT_SIZE];  //numInput will be used for user to input a character position
    size_t  position;   //position will be used for the program to convert the user input the character position from string to number
    do {    //Start the loop
        printf("Type no empty string (q - to quit):\n");  //display a message to user for enter a string: "Type no empty string (q - to quit):"
        fgets(buffer1, BUFFER_SIZE, stdin);     //Get a string from user, user typing a string by their keyboard
        buffer1[strlen(buffer1)-1] = '\0';  //To remove the newline from the string
        if (strcmp(buffer1, "q") !=0) { //Check if the input string is not only "q", then we can ask user to type the posistion of the string 
            printf("Type the character position within the string:\n"); //display a mesage to user enter a position: "Type the character position within the string:"
            fgets(numInput, NUM_INPUT_SIZE, stdin); //Get the position from user 
            numInput[strlen(numInput) - 1] = '\0';  //To remove the newline from the user input
            position = atoi(numInput);  //Convert user input from string to number format for find out the position of the string
            if (position >= strlen(buffer1)) {  //Check if the position is larger than the length of the string
                position = strlen(buffer1) - 1; //Find out the last position of the string
                printf("Too big... Position reduced to max. availbale\n");  //display a message to user if the position is larger than length of the string: "Too big... Position reduced to max. availbale"
            }
            printf("The character found at %d position is \'%C\'\n",  //display a messge to user to show the the character based on the user's input position
                            (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);  //infinite loop unless "q" is input by the user
    printf("*** End of Indexing Strings Demo ***\n\n"); //display a message to user and end of this function: "*** End of Indexing Strings Demo ***"

/* Version 2*/
    printf("*** Start of Measuring Strings Demo ***\n");  //display a message to user for second part of function: "*** Start of Measuring Strings Demo ***"
    char buffer2[BUFFER_SIZE];  //Define the size of character array for store user's input string
    do {  //Start the loop
        printf("Type a string (q - to quit):\n");  //display a message to user enter for enter string and type "q" to exit this part of fuction.
        fgets(buffer2, BUFFER_SIZE, stdin);  //Get a string from user, user typing a string by their keyboard
        buffer2[strlen(buffer2) - 1] = '\0';  //To remove the newline from the string
        if (strcmp(buffer2, "q") != 0)  //Check if user is not enter "q", then do below 1 action. 
        printf("The length of \'%s\' is %d characters\n",    //if not a "q", count the length of string and display a message to user about the length of entered string
                    buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0);  //infinite loop unless "q" is input by the user
    printf("*** End of Measuring Strings Demo ***\n\n");  //display a message to user and end of second part of the function: ""*** End of Measuring Strings Demo ***"

/* Version 3*/
    printf("*** Start of Copying Strings Demo ***\n");  //display a message to user for third part of function: "*** Start of Copying Strings Demo ***"
    char destination[BUFFER_SIZE];  ////Define the size of character array for copying string from user's input string
    char source[BUFFER_SIZE];  //Define the size of character array for store user's input string
    do {  //Start the loop
        destination[0] = '\0';  //Define the destination as empty string
        printf("Destination string is reset to empty\n");  //Display a message to user that destination string is reset to empty
        printf("Type the source string (q - to quit):\n");   //Display a message to uer for asking user to enter a source string and type q to exit this part of fuction.
        fgets(source, BUFFER_SIZE, stdin);  //Get a string from user, user typing a string by their keyboard
        source[strlen(source) - 1] = '\0';  //To remove the newline from the string
        if (strcmp(source, "q") != 0) {  //Check if user is not enter "q", then do below 2 actions
            strcpy(destination, source);  //if user not enter "q", copy user entered string to destination variable
            printf("New destination string is \'%s\'\n", destination);  //display a message to user about the copyied string
        }
    } while (strcmp(source, "q") != 0);  //infinite loop unless "q" is input by the user
    printf("*** End of Copying Strings Demo ***\n\n");  //display a message to user and end of second part of the function: ""*** End of Copying Strings Demo ***"


}  //Exit the function