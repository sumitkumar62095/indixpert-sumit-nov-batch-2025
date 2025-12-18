#include<stdio.h>

int sum(int number1, int number2)
{

    printf("totalsum:%d",number1+number2);

}
int subtract(int number1, int number2)
{

    printf("totalsubtract:%d",number1-number2);

}
int multiply(int number1, int number2)
{

    printf("totalmultiply:%d",number1*number2);

}
int divided(int number1, int number2)
{

    printf("totaldivided:%d",number1/number2);
}

int main()
{

    int number;

    printf("\n1.addition");
    printf("\n2.subtract");
    printf("\n3.multiply");
    printf("\n4.divided");
    printf("\nplease enter any options: ");
    scanf("%d",&number);

    int first_number;
    int secoand_number;

    printf("please enter your number: ");
    scanf("%d",&first_number);
    printf("please enter secoand number: ");
    scanf("%d",&secoand_number);
    if(1==number)
    {

        sum(first_number,secoand_number);
    }
    else if(2==number)
    {

        subtract(first_number,secoand_number);
    }
    else if(3==number)
    {


        multiply(first_number,secoand_number);

    }
    else if(4==number)
    {

        divided(first_number,secoand_number);

    }
    return 0;
}