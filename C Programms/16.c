#include<stdio.h>
int main()
{
	long int term,num = 1,sum=0,i;
	printf("\nEnter the terms = ");
	scanf("%ld",&term);//3
	for(i=1;i<=term;i++)//3
	{
		printf("%d",num);	
		if(i<term)
		{
			printf(" + ");
		}
		else
		{
			printf(" = ");
		}
		sum = sum + num;
		num = (num*10) + 1;
	}	
	printf(" %d",sum);
	return 0;
}
