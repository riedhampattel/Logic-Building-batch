#include<stdio.h>
int main()
{
    int num,sum=0;
    do
    {
        printf("\nEnter the number (0 to exit) = ");
        scanf("%d",&num);
        if(num>0)
        {
            sum = sum + num;
        }
    }while(num!=0);
    printf("\nAddition = %d",sum);
    return 0;
}