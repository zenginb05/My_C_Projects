#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CarDetails
{
    char CarsUserName[10];
    char LicensePlate[10];
    char Model[10];
    int ProductYear;
    char Color[10];
    char EntryTime[10];
};

int Numberofcar;

void AddCar(int count, struct CarDetails Cars[]);
void ListCar(int count, struct CarDetails Cars[]);

int main() {

    printf("Hello sir, welcome to our CarPark Station.. \n\n");

    printf("How many cars entered our Station? Please enter => ");
    scanf("%d", &Numberofcar);

    // Clear the newline left in the buffer by scanf
    getchar();

    struct CarDetails Cars[Numberofcar];

    AddCar(Numberofcar, Cars);
    printf("\n---------------------------------------------------------\n");
    printf("\n-----------------------IN CARS---------------------------------\n");
    ListCar(Numberofcar, Cars);

    return 0;
}

void AddCar(int count, struct CarDetails Cars[]) {
    for (int i = 0; i < count; i++) {
        printf("Enter your %d. car details\n", i + 1);

        printf("First of all, please enter your name for your car => ");
        fgets(Cars[i].CarsUserName, sizeof(Cars[i].CarsUserName), stdin);
        Cars[i].CarsUserName[strcspn(Cars[i].CarsUserName, "\n")] = '\0';

        printf("%d. car's license plate => ", i + 1);
        fgets(Cars[i].LicensePlate, sizeof(Cars[i].LicensePlate), stdin);
        Cars[i].LicensePlate[strcspn(Cars[i].LicensePlate, "\n")] = '\0';

        printf("%d. car's model => ", i + 1);
        fgets(Cars[i].Model, sizeof(Cars[i].Model), stdin);
        Cars[i].Model[strcspn(Cars[i].Model, "\n")] = '\0';

        printf("%d. car's color => ", i + 1);
        fgets(Cars[i].Color, sizeof(Cars[i].Color), stdin);
        Cars[i].Color[strcspn(Cars[i].Color, "\n")] = '\0';

        printf("%d. car's entry time => ", i + 1);
        fgets(Cars[i].EntryTime, sizeof(Cars[i].EntryTime), stdin);
        Cars[i].EntryTime[strcspn(Cars[i].EntryTime, "\n")] = '\0';

        printf("%d. car's product year => ", i + 1);
        scanf("%d", &Cars[i].ProductYear);

        // Clear the newline left in the buffer by scanf
        getchar();
    }
}

void ListCar(int count, struct CarDetails Cars[]) {
    for (int i = 0; i < count; i++) {
        printf("%d. Car's license plate is => %s \n\n", i + 1, Cars[i].CarsUserName);
        printf("%d. Car's license plate is => %s \n", i + 1, Cars[i].LicensePlate);
        printf("%d. Car's color is => %s \n", i + 1, Cars[i].Color);
        printf("%d. Car's model is => %s \n", i + 1, Cars[i].Model);
        printf("%d. Car's entry time is => %s \n", i + 1, Cars[i].EntryTime);
        printf("%d. Car's product year is => %d \n", i + 1, Cars[i].ProductYear);
    }
}
