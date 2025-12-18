#include<stdio.h>

int multiply()
{


    int first_number;
    int secoand_number;

    printf("please enter a first number: ");
    scanf("%d\n",&first_number);
    printf("please enter secoand number: ");
    scanf("%d\n",secoand_number);

    printf("%d",first_number*secoand_number);

}
int division()
{


    int first_number;
    int secoand_number;



    printf("please enter first number: ");
    scanf("%d\n",&first_number);
    printf("please enter secoand number: ");
    scanf("%d",&secoand_number);
    printf("%d\n",first_number/secoand_number);
}



int main()
{

int number;
printf("\n1.devision");
printf("\n2.multiply");
printf("please enter any option number: ");
scanf("%d",&number);
if(number==1)
{

    multiply();
}
else if(number==2)
{
    division();
}

    return 0;
}