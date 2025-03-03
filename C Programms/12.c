//Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long, should contain 1 capital case 1 lower case - 1 special character and 1 number).
#include<stdio.h>
int main()
{
    int i;
    int flag = 1,capital=0,lower=0,number=0,special=0,temp;
    char user[15];
    while(flag)
    {
        temp=5;
        printf("\nEnter the username = ");
        scanf("%s",user);
        int length = strlen(user);
        if(length<8)
        {
            printf("\nPlease enter atleast 8 characters");
            temp--;
        }
        for(i=0;user[i]!='\0';i++)
        {
            if(user[i]>='A' && user[i]<='Z')
            {
                capital = 1;
                break;
            }
        }
        for(i=0;user[i]!='\0';i++)
        {
            if(user[i]>='a' && user[i]<='z')
            {
                lower = 1;
                break;
            }
        }
        for(i=0;user[i]!='\0';i++)
        {
            if(user[i]>='0' && user[i]<='9')
            {
                number = 1;
                break;
            }
        }
        for(i=0;user[i]!='\0';i++)
        {
            if((user[i]>='A' && user[i]<='Z')||(user[i]>='a' && user[i]<='z')||(user[i]>='0' && user[i]<='9'))
            {

            }
            else
            {
                special = 1;
                break;
            }
        }
        if(capital==0)
        {
            printf("\nPlease enter atleast 1 capital case");
            temp--;
        }
        if(lower==0)
        {
            printf("\nPlease enter atleast 1 lower case");
            temp--;
        }
        if(number==0)
        {
            printf("\nPlease enter atleast 1 number");
            temp--;
        }
        if(special==0)
        {
            printf("\nPlease enter atleast 1 special character");
            temp--;
        }
        if(temp==5)
        {
            flag=0;
        }
    }
    return 0;
}