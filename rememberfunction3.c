#include<stdio.h>


int sum(int number1, int number2)
{

    printf("%d",number1+number2);


}
int multiply(int number1, int number2)
{


    printf("%d",number1*number2);
}
int subtract(int number1, int number2)
{

    printf("%d",number1-number2);
}



int main()
{

    int number;
    printf("\n1.addition");
    printf("\n2.multiply");
    printf("\n3.subtract");

    printf("please enter any options: ");
    scanf("%d",&number);

    int first_number=20;
    int secoand_number=30;
    if(number==1)
    {

        sum(20,30);
    }
    else if(number==2)
    {

        multiply(20,30);
    }
    else if(number==3)
    {


        subtract(20,30);
    }
    return 0;
}