#include<stdio.h>
int main()
{
    int start,end,i,j;
    printf("\nEnter the starting value = ");
    scanf("%d",&start);//5
    printf("\nEnter the ending value = ");
    scanf("%d",&end);//100
    printf("\nPerfect numbers between %d and %d = ",start,end);
    for(i=start;i<=end;i++)
    {
        int sum = 0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}