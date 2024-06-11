#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

int main_operation=0,second_operation=0,third_operation=0,operation=0;
float main_number=0,second_number=0,third_number=0;

printf("Please Select What U Want \n [0]Math Operation\n [1]Geometry Operation\n");
printf("\t ===>");
scanf("%d",&main_operation);

if (main_operation==0)
{
    
printf("Please Select What U Want \n [0]Addition\n [1]Subtraction\n [2]Multiplication\n [3]Division\n [4]Exponent Numbers\n [5]Radical Numbers\n");
printf("\t ===>");
scanf("%d",&operation);

switch (operation)
{
case 0:
    printf("Please enter first number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("Please enter second number =>");
    scanf("%f",&second_number);
    printf("\n");
    printf("%.2f + %.2f = %.2f",main_number,second_number,(main_number+second_number));
    break;
case 1:
    printf("Please enter first number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("Please enter second number =>");
    scanf("%f",&second_number);
    printf("\n");
    printf("%.2f - %.2f = %.2f",main_number,second_number,(main_number-second_number));
    break;
case 2:
    printf("Please enter first number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("Please enter second number =>");
    scanf("%f",&second_number);
    printf("\n");
    printf("%.2f - %.2f = %.2f",main_number,second_number,(main_number*second_number));
    break;
case 3:
    printf("Please enter MAİN number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("Please enter SECOND number =>");
    scanf("%f",&second_number);
    printf("\n");
    printf("%.2f - %.2f = %.2f",main_number,second_number,(main_number/second_number));
    break;
case 4:
    printf("Please enter FLOOR number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("Please enter SECOND number =>");
    scanf("%f",&second_number);
    printf("\n");
    printf("%.2f ^ %.2f = %.2f",main_number,second_number,pow(main_number,second_number));
    break;
case 5:
    printf("Please enter MAIN number =>");
    scanf("%f",&main_number);
    printf("\n");
    printf("%2.f ^(1/2) = %2.f",main_number,sqrt(main_number));
    break;

default:
    printf("U enter wrong number, Please restart the program...");
    break;
}
}



else if (main_operation==1)
{
    printf("Please Select What U Want\n [0]Area Calculation\n [1]Volume Calculation\n ");
    printf("\t ===>");
    scanf("%d",&second_operation);

    if (second_operation==0)
    {
        printf("Please Select What U Want\n [0]2D Area Calculation\n [1]3D Area Calculation()\n ");
        printf("\t ===>");
        scanf("%d",&operation);



    if (operation==0)
    {
        printf("Please enter first corner length =>");
        scanf("%f",&main_number);
        printf("\n");
        printf("Please enter second corner length =>");
        scanf("%f",&second_number);
        printf("Your area is %2.f * %2.f = %2.f",main_number,second_number,(main_number*second_number));
    }
    
    else if (operation==1)
    {
        printf("Please Select What U Want\n [0]Spherical Area Calculation [1]Prismatic Area Calculation\n ");
        printf("\t ===>");
        scanf("%d",&third_operation);


        if (third_operation==0)
        {
        printf("Please enter radius length =>");
        scanf("%f",&main_number);
        printf("\n");
        printf("Area of the sphere is 4 * pi * %2.f ^ 2 = %2.f",main_number,(4*3.14*(main_number*main_number)));
        
        }
        if (third_operation==1)
        {
        printf("Please enter first corner length =>");
        scanf("%f",&main_number);
        printf("\n");
        printf("Please enter second corner length =>");
        scanf("%f",&second_number);
        printf("\n");
        printf("Please enter third corner length =>");
        scanf("%f",&third_number);
        printf("\n");
        printf("Your area is 2*((a*b)+(a*c)+(b*c)) = %2.f",(2*((main_number*second_number)+(main_number*third_number)+(second_number*third_number))));
        }

        

    }

    }
    
    else if (second_operation==1)
    {
        printf("Please Select What U Want\n [0]Spherical Volume Calculation [1]Prismatic Volume Calculation\n ");
        printf("\t ===>");
        scanf("%d",&operation);


        if (operation==0)
        {
        printf("Please enter radius length =>");
        scanf("%f",&main_number);
        printf("\n");
        printf("Volume of the sphere is 4 * (1/3) * pi * %2.f ^ 3 = %2.f",main_number,(4*(1/3)*3.14*(main_number*main_number*main_number)));
        
        }else if (operation==1)
        {
        printf("Please enter first corner length =>");
        scanf("%f",&main_number);
        printf("\n");
        printf("Please enter second corner length =>");
        scanf("%f",&second_number);
        printf("\n");
        printf("Please enter third corner length =>");
        scanf("%f",&third_number);
        printf("\n");
        printf("Volume of prism is %2.f * %2.f * %2.f = %2.f",main_number,second_number,third_number,(main_number*second_number*third_number));
        }
        


    }
    
    
    
    
    

    
        
  
    
    


}





}