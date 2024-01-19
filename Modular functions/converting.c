#define _CRT_SECURE_NO_WARNINGS // Disable secure warnings
#define BUFFER_SIZE 80 // Define a constant for buffer
#include "converting.h" // Include the header file

// The first part of this function gets user input for numeric string and convert it to integer, and then display the result until the user enters 'q' to quit this part of the function
// The second part of this function gets user input for numeric string and convert it to double data type that supported large range of number than integer data type, and then display the result until the user enters 'q' to quit this part of the function
// The third part of this function gets user input for numeric string and convert it to long data type that supported large range of number than double data type, and then display the result until the user enters 'q' to quit this part of the function

void converting(void) {
// V1
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];     // Declare array for input string
    int intNumber;                   // Declare an integer variable to hold the number after converting it from string
    do {       // Start a loop that stops when the user enters 'q'
        printf("Type the int numeric string (q - to quit): \n"); // ask the user to type the int string (q - to quit)
        fgets(intString, BUFFER_SIZE, stdin);          // Read user input and save it in intString
        intString[strlen(intString) - 1] = '\0';       // Remove the newline character at the end
        if (strcmp(intString, "q") != 0) {          // Check if the user entered character 'q' to quit
            intNumber = atoi(intString);                // Convert the string to an int
            printf("Converted number is %d\n", intNumber);      // Print the converted number
        }
    } while (strcmp(intString, "q") != 0);          // Continue the loop as long as the entered string is not 'q'
    printf("*** End of Converting Strings to int Demo ***\n\n");

// V2
    printf("*** Start of Converting Strings to double Demo ***\n"); // Starts the section where we can convert a double string into a number
    char doubleString[BUFFER_SIZE];             // Declares the array for input string
    double doubleNumber;            // Declares a double variable to hold the final number after the conversion
    do {                            // Start the DO loop that will keep running, while the string is not 'q'
        printf("Type the double numeric string (q - to quit):\n");  // Gives the instruction to user
        fgets(doubleString, BUFFER_SIZE, stdin);        // Reads user input and saves it in doubleString variable
        doubleString[strlen(doubleString) - 1] = '\0';      // Removes the newline character at the end of the string
        if ((strcmp(doubleString, "q") != 0)) {     // If conditional which checks if the doubleString is different from 'q'
            doubleNumber = atof(doubleString);      // Converts the string to a double and stores it in doubleNumber variable
            printf("Converted number is %f\n", doubleNumber);       // Displays the output message with the converted number
        }
    } while(strcmp(doubleString, "q") != 0);        // while condition to keep in the DO loop, as long as the string is not 'q'
    printf("*** End of Converting Strings to double Demo ***\n\n"); 

// V3
    printf("*** Start of Converting Strings to long Demo ***\n"); // Starts the section where we can convert a long string into a long number
    char longString[BUFFER_SIZE];               // Declares the array for input string
    long longNumber;                // Declares a double variable to hold the final number after the conversion
    do {                            // Start the DO loop that will keep running, while the string is not 'q'
        printf ("Type the long numeric string (q - to quit):\n");       // Gives the instructions to the user
        fgets (longString, BUFFER_SIZE, stdin);         // Reads user input and saves it in longString variable
        longString [strlen (longString) - 1] = '\0';        // Removes the newline character at the end of the string
        if ((strcmp(longString, "q") != 0)) {       // If conditional which checks if the longString is different from 'q'
            longNumber = atol(longString) ;         // Converts the string to a long and stores it in longNumber variable
            printf("Converted number is %ld\n", longNumber);        // Displays the output message with the converted number
        }
    } while (strcmp (longString, "q") != 0);        // while condition to keep in the DO loop, as long as the string is not 'q'
    printf ("*** End of Converting Strings to long Demo ***\n\n");    

}

