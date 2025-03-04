//- Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.
#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int i=1;
	while(i<=num)
	{
		if(i%2==0)
		{
			printf("%d ",i*i*i);
			sum = sum + (i*i*i);
		}
		i++;
	}
	printf("\nThe addition is = %d",sum);
	return 0;
}
