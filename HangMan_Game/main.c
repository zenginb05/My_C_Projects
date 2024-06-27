#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int chances = 6;         //You can change your chances in there
char sentence[20];      //You can change your sentence's lenght. BUT İF U CHANGE THAT u have change indicator'S lenght
char indicator[20];     //İndicator
char character;         //Variable for your guess 

int woncheck = 0;

void status();          //function
void check();           //function

void main() {

printf("Wellcome to my hangman game");
printf("Player 1 please enter your sentence [Max 20 character] ==> ");  
gets(sentence);         //Get sentence
    
    while (strlen(sentence)>=20)    //Checking for less than 20 char
        {
            printf("Please enter max 20 character ==> ");
            gets(sentence);
        }

    for (int i = 0; i < strlen(sentence); i++) {  // The indicator takes _ as long as the sentence
        if (sentence[i] != ' ') {
            indicator[i] = '_';
        } else {
            indicator[i] = ' ';
        }
    }


printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");   //Screen was skipped 

status(); //Shows sentence's lenght before all of all

while (chances > 0 ) //We gave [changes] rights, so we create loops for a [changes] times
{

    woncheck = 1;   //We need to check the game

    for (int k = 0; k < strlen(sentence); k++) {
        if (indicator[k] == '_') { // if any indicator letter's is not equal to '_' , it is mean, we not won the game yet
            woncheck = 0;
            break;
        }
    }

        if (woncheck == 1) {
        printf("Player 1 won the game\n");
        break;
    }
    
    printf("Player 2 please enter 1 character ==> ");   //Let's gets letter
    scanf(" %c",&character);
    printf("\n");
    chances--;      // -1 Chance
    check();    //Checking
    status();   //Now where we are in status
        
    if (chances == 0) {
        printf("Player 1 lost the game\n");
        break;
    }

}



}


void status() {


    for (int  i = 0; i < strlen(sentence); i++)     //As long as the sentence...
    {
/*         if (sentence[i]==' ')       //İf yours sentences have space, we give space
        {
            printf(" ");
        }
*/        printf("%c ",indicator[i]);     //We print the indicator equal to the length of the sentence
    }

    printf("You have %d chances left. \n \n",chances);
    

}

void check() {

    for (int  i = 0; i < strlen(sentence); i++)
    {
        if (toupper(sentence[i]) == toupper(character))     //if any sentece's letter equal to yours letter indicator gets your letter 
        {
            indicator[i] = character;
        }
        
    }
    
}


