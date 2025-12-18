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
if(number==1)
{

    sum(20,40);

}
else if(number==2)
{

    subtract(60,30);

}
    return 0;
}
