#include<stdio.h>
int main()
{
	//64 + 49 = 113
	int num,sum=0,rem;
	printf("\nEnter any positive number = ");
	scanf("%d",&num);//12
	do
	{
		rem = num%10;
		printf("%d ",rem*rem);
		sum = sum + (rem*rem);
		num = num/10;
		if(num!=0)
		{
			printf(" + ");
		}
		else
		{
			printf(" = %d",sum);
		}
	}while(num!=0);
	printf("\nThe addition = %d",sum);
	return 0;
}
