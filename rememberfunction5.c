#include<stdio.h>


int sum(int a,int b)

{

    

    printf("%d\n",a+b);

}



int subtract(int a,int b)
{

    

    printf("%d\n",a-b);




}
int main()
{
int number;

printf("\nnumber1.addition ");
printf("\nnumber2.subtraction ");
printf("\nplease selectany option: ");
scanf("%d",&number);
int first_number=20;
int secoand_number=30;
if(number==1)
{

    sum(first_number,secoand_number);

}
else if(number==2)
{

    subtract(first_number,secoand_number);

}
    return 0;
}
