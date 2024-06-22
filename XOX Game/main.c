#include <stdlib.h> 
#include <stdio.h>

void game();
void status();

char player1[20];
char player2[20];
char table[3][3]= {
    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}
};
int x=0,y=0;


void main() {

printf("Wellcome to game. \n \n");
printf("Player 1 enter your name please =>");
gets(player1);
printf("\n");
printf("Player 2 enter your name please =>");
gets(player2);
printf("\n");
printf("LET'S PLAY ITT \n ");
printf("---------------------------------\n");
game();

}


void game(){

    status();
    for (int i = 0; i < 9; i++)
    {
        

        printf("%s please enter your coordinate\n ",player1);
        scanf("%d %d",&x,&y);
        table[x-1][y-1]='X';

        status();

        printf("%s please enter your coordinate\n ",player2);
        scanf("%d %d",&x,&y);
        table[x-1][y-1]='O';
        status();
    }

}


void status() {
    printf("\n\n\n\n\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("\t %c ",table[i][j]);
                if (j!=2)
                {
                printf("  |");    
                }     
            }
            printf("\n\n\n");
        }
    printf("\n\n\n\n\n");
}