#include<stdio.h>

int sum(int first_number, int secoand_number)
{

    printf("%d",first_number+secoand_number);
}
int subtract(int first_number, int secoand_number)
{
    printf("%d",first_number-secoand_number);
}
int multiply(int first_number, int secoand_number)
{

    printf("%d",first_number*secoand_number);
}


int main()
{

int number;

printf("\nnumber1.sum");
printf("\nnumber2.subtract");
printf("\nnumber3.multiply");
printf("please enter any options: ");
scanf("%d",number);

int first_number;
int secoand_number;

printf("please enter first number: ");
scanf("%d",&first_number);
printf("please enter secoand number: ");
scanf("%d",&secoand_number);

if(number==1)
{

    sum(first_number,secoand_number);
}
if(number==2)
{

    subtract(first_number,secoand_number);
}
if(number==3)
{


    multiply(first_number,secoand_number);
}
    return 0;
}