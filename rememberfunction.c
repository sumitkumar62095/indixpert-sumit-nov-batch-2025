#include<stdio.h>

int table()
{

    int number;

    printf("please enter your number: ");
    scanf("%d",&number);
    for(int i=1; i<=number; i++)
    {


        printf("%d\n",number*i);

    }




}
int even()
{

    for(int i=0; i<=50; i++)
        if(i%2==0)
    {


        printf("%d\n",i);


    }





}
int main()
{

    table();
    even();

    return 0;
}