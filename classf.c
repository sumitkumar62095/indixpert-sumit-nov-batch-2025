#include<stdio.h>


int sum()

{

    int a=20;
    int b=20;

    printf("%d\n",a+b);

}



int subtract()
{

    int a=20;
    int b=30;

    printf("%d\n",a-b);




}
int main()
{
int number;

printf("\nnumber1.addition ");
printf("\nnumber2.subtraction ");
printf("\nplease selectany option: ");
scanf("%d",&number);
if(number==1)
{

    sum();

}
else if(number==2)
{

    subtract();

}
    return 0;
}
