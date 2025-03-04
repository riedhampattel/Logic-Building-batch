#include<stdio.h>
int main()
{
	int num,sum = 0,j;
	printf("\nEnter the number = ");
	scanf("%d",&num);//5
	int i=2;
	do
	{
		int flag = 1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break;			
			}
		}
		if(flag==1)
		{
			printf("%d ",i);
			sum = sum + i;
		}
		i++;//6
	}while(i<=num);
	printf("\nThe addition of prime numbers = %d",sum);
	return 0;
}
