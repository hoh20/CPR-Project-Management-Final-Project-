// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS   // Disable secure warnings
#define BUFFER_SIZE 80  // Define a constant for the BUFFER_SIZE
#include "manipulating.h"  // Include the header file

// The first part of function takes user input for two strings and concatenates them, and then display the result until the user enters 'q' to quit this part of function.
// The first part of function takes user input for two strings and compare them, and then display the result until the user enters 'q' to quit this part of function.
// The first part of function takes user input for two strings and find the second entered string in first entered string, and then display the result until the user enters 'q' to quit this part of function.


void manipulating(void) {
	// V1
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];    // Declare a string array for input string1 and use BUFFER_SIZE as the size of the array
    char string2[BUFFER_SIZE];    // Declare a string array for input string2 and use BUFFER_SIZE as the size of the array
    do {        // Start a loop that stops when the user enters 'q'
        printf("Type the 1st string (q - to quit): \n");        // ask the user to input the 1st string
        fgets(string1, BUFFER_SIZE, stdin);             // Read user input and save it in string1
        string1[strlen(string1) - 1] = '\0';            // Remove the newline character at the end of string1
        if ((strcmp(string1, "q") != 0)) {              // Check if the user entered character 'q' to quit
            printf("Type the 2nd string:\n");           // Ask the user to input the 2nd string
            fgets(string2, BUFFER_SIZE, stdin);         // Read the input and save it in string2
            string2[strlen(string2) - 1] = '\0';        // Remove the newline character at the end string2
            strcat(string1, string2);                   // Concatenate the 2nd string to the 1st string
            printf("Concatenated string is \'%s\'\n", string1);        // Print the new string
        }
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");
    
    /* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n");
    char comparel[BUFFER_SIZE];     // Declare a string array for input comparel and use BUFFER_SIZE as the size of the array
    char compare2[BUFFER_SIZE];    // Declare a string array for input compare2 and use BUFFER_SIZE as the size of the array
    int result;
    do { // Start a loop that stops when the user enters 'q'
      printf("Type the 1st string to compare (q - to quit): \n"); // ask the user to input the 1st string
      fgets(comparel, BUFFER_SIZE, stdin); // Read user input and save it in compare1
      comparel[strlen(comparel) - 1] = '\0'; // Remove the newline character at the end of comparel
      if (strcmp(comparel, "q") != 0) { // Check if the user entered character 'q' to quit
        printf("Type the 2nd string to compare: \n"); // Ask the user to input the 2nd string
        fgets(compare2, BUFFER_SIZE, stdin); // Read the input and save it in compare2
        compare2[strlen(compare2) - 1] = '\0'; // Remove the newline character at the end compare2
        result = strcmp(comparel, compare2); // Compare the two strings and store the result in the 'result' variable
        // Check the result of the comparison and print the appropriate message
        if (result < 0) // Check to see if the result is less than 0
          printf("\'%s\' string is less than \'%s\'\n", comparel, compare2); // print a message to let the user know the string is less than 0
        else if (result == 0) // Check to see if the result is equal to 0
          printf("\'%s\' string is equal to \'%s\'\n", comparel, compare2); // print a message to let the user know the string is equal to 0
        else // if the result is not less than or equal to 0
          printf("\'%s\' string is greater than \'%s\'\n", comparel, compare2); // print a message to let the user know the string is greater than 0
      }
      }while (strcmp(comparel, "q") != 0); // Continue the loop until the user enters 'q' to quit
      printf("*** End of Comparing Strings Demo ***\n\n");

    /* Version 3*/
    printf("*** Start of Searching Strings Demo ***\n");
    char  haystack[BUFFER_SIZE]; // Declare a string array for input haystack and use BUFFER_SIZE as the size of the array
    char  needle[BUFFER_SIZE]; // Declare a string array for input needle and use BUFFER_SIZE as the size of the array
    char * occurrence = NULL; // Declare a pointer variable named occurrence and point to NULL
      do {  // Start a loop that stops when the user enters 'q'
        printf("Type the string (q to quit): \n");  // ask the user to input the 1st string
        fgets(haystack, BUFFER_SIZE, stdin); // Read user input and save it in haystack
        haystack[strlen(haystack) - 1] = '\0'; // Remove the newline character at the end haystack
        if (strcmp(haystack, "q") != 0) { // Check if the user entered character 'q' to quit
          printf("Type the substring:\n"); // ask the user to input the 2nd string
          fgets(needle, BUFFER_SIZE, stdin); // Read user input and save it in needle
          needle[strlen(needle) - 1] = '\0'; // Remove the newline character at the end needle
          occurrence = strstr(haystack, needle); // Find the occurrence of the needle in the haystack
        // Check if the needle was found in the haystack
        if (occurrence)
            printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack)); // print a message to let the user know the occurrence has been found
        else
            printf("Not found\n"); // print a message to let the user know the occurrence has not been found
    }
      } while (strcmp(haystack, "q") != 0); // Continue the loop until the user types 'q'
    printf("*** End of Searching Strings Demo ***\n\n");
}


