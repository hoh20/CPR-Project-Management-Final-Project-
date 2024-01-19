
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300  // Define a constant for buffer

#include "tokenizing.h"  // Include the header file

// The first part of this function gets user input for a few words and find the number of words entered separated by space and display the each word until the user enters 'q' to quit this part of the function
// The second part of this function gets user input for a few words and find the number of phrases entered separated by comma and display the each phrase until the user enters 'q' to quit this part of the function
// The third part of this function gets user input for a few words and find the number of sentences entered separated by dot and display the each sentence until the user enters 'q' to quit this part of the function


void tokenizing(void) {
/* Version 1 */
    printf("*** Start of Tokenizing Words Demo ***\n");  //display message to user about purpose of this part of function
    char words[BUFFER_SIZE];  // Declare array for input string
    char *nextword = NULL;  //Declare the char pointer 
    int wordsCounter;  //Declare the number of word for counting
    do  //start the loop
    {
        printf("Type a few words separated by space (q - to quit):\n");  //display message to user for enter a few words
        fgets(words, BUFFER_SIZE, stdin);  //get input from user and store to words
        words[strlen(words) - 1] = '\0';  // Remove the newline character at the end
        if (strcmp(words, "q") != 0)  //Check if entered string is not q, then take below actions
        {
            nextword = strtok(words, " ");  //find the word before the space
            wordsCounter = 1;  //set number of word start from 1
            while (nextword)   //start the loop to find each word in the string separated by space
            {
                printf("word #%d is \'%s\'\n", wordsCounter++, nextword);  //display each word before space and increase the number of word by 1
                nextword = strtok(NULL, " ");  //Check if it is the last word
            }
        }
    } while (strcmp(words, "q") != 0);  //exit this part of function if user entered 'q' 

    printf("*** End of Trokenizing Words Demo ***\n\n");  //display message to user for end of this part of function


/* Version 2 */
    printf("*** Start of Tokenizing Phrases Demo***\n");  //display message to user about purpose of this part of function
    char phrases[BUFFER_SIZE];  // Declare array for input string
    char *nextPhrase = NULL;  //Declare the char pointer 
    int phrasesCounter;  //Declare the number of phrases for counting

    do  //start the loop
    {
        printf("Type a few phrases separated by comma (q - to quit):\n");  //display message to user for enter a few phrases
        fgets(phrases, BUFFER_SIZE, stdin);  // get input from the user
        phrases[strlen(phrases) - 1] = '\0'; // Remove the newline character at the end
        if ((strcmp(phrases, "q") != 0))  //Check if entered string is not q, then take below actions
        {
            nextPhrase = strtok(phrases, ","); // find the phrases before comma
            phrasesCounter = 1;                //set the number of phrases start from 1
            while (nextPhrase)  //start the loop to find the phrase in the string separated by comma
            {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); //display the phrases before comma and increase the number of phrases by 1
                nextPhrase = strtok(NULL, ",");                                 //Check if it is the last phrase
            }
        }
    } while (strcmp(phrases, "q") != 0);  //exit this part of function if user entered 'q' 
    printf("*** End of Tokenizing Phrases Demo ***\n\n");  //display message to user for end of this part of function


/* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo***\n");  //display message to user about purpose of this part of function
    char sentences[BUFFER_SIZE];  // Declare array for input string
    char *nextSentence = NULL;  //Declare the char pointer 
    int sentencesCounter;  //Declare the number of sentences for counting

    do  //start the loop
    {
        printf("Type a few sentences separated by dot (q - to quit):\n");  //display message to user for enter a few sentences
        fgets(sentences, BUFFER_SIZE, stdin);    // get input from the user
        sentences[strlen(sentences) - 1] = '\0'; // Remove the newline character at the end
        if ((strcmp(sentences, "q") != 0))  //Check if entered string is not q, then take below actions
        {
            nextSentence = strtok(sentences, "."); // find the sentences before dot
            sentencesCounter = 1;                //set the number of sentences start from 1
            while (nextSentence)
            {
                printf("Phrase #%d is \'%s\'\n", sentencesCounter++, nextSentence); //display the sentence before dot and increase the number of sentences by 1
                nextSentence = strtok(NULL, ".");                                    //Check if it is the last sentence
            }
        }
    } while (strcmp(sentences, "q") != 0);  //exit this part of function if user entered 'q' 
    printf("*** End of Tokenizing Sentences Demo ***\n\n");  //display message to user for end of this part of function
}