

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

status();

printf("Player 2 please enter 1 character");
scanf(" %c",character);
    
    while (strlen(character)>1)
        {
            printf("Please enter only 1 character ==> ");
            scanf(" %c",character);
        }



}


void status () {



    for (int  i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i]==' ')
        {
            printf(" ");
        }
        printf("_ ");
    }

    printf("You have %d chances left.",chances);
    

}

