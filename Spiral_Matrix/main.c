#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

int n;

printf("Please enter number for matrix. (Only odd numbers) => ");
scanf("%d",&n);

while (n % 2 != 1) {
        printf("I SAID ONLY ODD NUMBERS. AGAIN! =>> ");
        scanf("%d", &n);
    }
    
int** matrix = (int**)malloc(n * sizeof(int*));

for (int i = 0; i < n; i++) {
    matrix[i] = (int*)malloc(n * sizeof(int));
}

for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        matrix[i][j] = 0;



for (int  i = (n-n); i <=(n-1) ; i++)
    for (int j = (n-n); j <=(n-1); j++)
        matrix[i][j]=n;

for (int  i = n-(n-1); i <=(n-2) ; i++)
    for (int j = n-(n-1); j <=(n-2); j++)
        matrix[i][j]=n-1;

for (int  i = n-(n-2); i <=(n-3) ; i++)
    for (int j = n-(n-2); j <=(n-3); j++)
        matrix[i][j]=n-2;

for (int  i = n-(n-3); i <=(n-4) ; i++)
    for (int j = n-(n-3); j <=(n-4); j++)
        matrix[i][j]=n-3;

for (int  i = n-(n-4); i <=(n-5) ; i++)
    for (int j = n-(n-4); j <=(n-5); j++)
        matrix[i][j]=n-4;

for (int  i = n-(n-5); i <=(n-6) ; i++)
    for (int j = n-(n-5); j <=(n-6); j++)
        matrix[i][j]=n-5;


matrix[n/2][n/2]=n%2;



//printer
for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    
printf("\n--------\n");
//printer



}


