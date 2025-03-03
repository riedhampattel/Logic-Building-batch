//Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.
#include<stdio.h>
int main()
{
    int num,a[100],flag=1,index=0,i;
    //{1,5,1}
    while(flag)
    {
        printf("\nEnter the number = ");
        scanf("%d",&num);//1
        a[index] = num;
        index++;//3
        for(i=0;i<index-1;i++)
        {
            if(a[i]==num)
            {
                flag=0;
            }
        }
    }
	return 0;
}