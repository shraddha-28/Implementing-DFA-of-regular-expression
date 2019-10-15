//c program for implementing DFA of regular expression (a+aa*b)*
// This String can only start by 'a' and no 2 'b' comes together

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char input[100];
    printf("Enter the string \n");
    scanf("%s",input);
    int len=strlen(input);
    int i;
    int status_a=0,status_b=0;
    for(i=0;i<len;i++)
    {

        if(input[i]!='a'&&input[i]!='b')
        {
            printf("You entered wrong input \n");
            break;

        }
        else
        {
            if(input[i]=='a')
            {
                status_a=1;
                status_b=0;
            }//abb
            else
            {
                if(status_b==1 || status_a==0)
                {
                    printf("String is not accepted \n");
                    break;
                }
                else{
                    status_b=1;
                    status_a=0;
                }
            }
        }
        if(i==len-1)
        {
            printf("String is accepted\n");

        }
    }
    return 0;
}

