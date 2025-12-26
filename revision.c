#include<stdio.h>
#include<string.h>
int main()
{

    char account_number[9];
    int size=0;
    int count=0;
    while(1)
    {

        printf("please enter acount number: ");
        scanf("%d",&account_number);
        size=strlen(account_number);

        if(size==9)
        {

            for(int i=0; i<9; i++)
            {

                if(account_number[i] >= '0' && account_number[i] <='9');
                {
                    count++;
                }


            }
            if(count==0)
            {


                printf("\nthis is vailed acount number: %s",account_number);
                break;
            }
            else
            {

                printf("\nplease enter vailed acount number: ");
            }

        }
        else
        {
            printf("\nplease enter vailed acount number: ");
                
        }

    }

    return 0;
}