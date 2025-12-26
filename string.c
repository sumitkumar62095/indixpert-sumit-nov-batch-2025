#include<stdio.h>

int string_length(char string[])
{


    int size=0;
    for(int i=0; string[i]!='\0';i++)
    {

        size++;
    }


    return size;



}
int main()
{
    char name[20];
    int length;

    printf("please enter name: ");
    scanf("%d",&name);

    length=string_length(name);

    printf("length of string:%d",length);

    return 0;
}