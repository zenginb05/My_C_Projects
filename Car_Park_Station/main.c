
//It's not ready yet ----------------------------------------------------------------------------------- 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct CarDetails
{
    char CarsUserName[10];
    char LicansePlate[10];
    char Model[10];
    int ProductYear;
    char Color[10];
    char EntryTime[10];

};


int Numberofcar;

void AddCar(int count,struct CarDetails Cars[]);
void ListCar();

void main() {

printf("Hello sir wellcome to our CarPark Station.. \n\n");

printf("How many car enter to our Station. Please enter => ");
scanf("%d",&Numberofcar);

struct CarDetails Cars[Numberofcar];




AddCar(Numberofcar,Cars);


}

void AddCar(int count,struct CarDetails Cars[]) {


    for (int  i = 0; i < count; i++)
    {
        printf("Enter Your %d. car details ",i+1);

        printf("First of all please enter your name for your car =>");
        gets(Cars[i].CarsUserName);
        
        printf("%d. car's licanse plate => ",i+1);
        gets(Cars[i].LicansePlate);
            
        printf("%d. car's model => ",i+1);
        gets(Cars[i].Model);

        printf("%d. car's product year => ",i+1);
        scanf("%d",&Cars[i].ProductYear);

        printf("%d. car's color => ",i+1);
        gets(Cars[i].Color);

        printf("%d. car's entry time => ",i+1);
        gets(Cars[i].EntryTime);

        


    }
    


}