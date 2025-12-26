#include<stdio.h>
#include<string.h>

int main()
{


char account_number[9];
int size=0;

printf("please enter a number: ");
scanf("%d",&account_number);

for(int i=0; i<account_number[i]!='\0';i++)
{



    size++;
}




printf("\nlength of string:%d",size);

    return 0;
}