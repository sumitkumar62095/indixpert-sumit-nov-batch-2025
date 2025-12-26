#include<stdio.h>

int table()
{

    int number;

    printf("please enter a number table: ");
    scanf("%d",&number);

    for(int i=0; i<=number; i++)
    {


        printf("%d",number*i);
    }

}
int even()
{



    for(int i=0; i<=50; i++)
    if(i%2==0)
    {



        printf("%d",i);
    }

}

int main()
{

table();
even();
    return 0;
}