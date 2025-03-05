/*
Write a program in C to make a pyramid pattern with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main()
{
    int row,temp=1,i,j,k;
    printf("\nEnter the row number = ");
    scanf("%d",&row);
    int spc = row-1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=spc;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%2d ",temp);
            temp++;
        }
        printf("\n");
        spc--;
    }
}