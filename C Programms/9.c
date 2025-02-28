#include<stdio.h>
#include<math.h>
int main()
{
    double amount;
    printf("\nEnter the amount = ");
    scanf("%lf",&amount);//2557

    printf("500 ---> %.lf",floor(amount/500));
    amount = fmod(amount,500);
    printf("\n200 ---> %.lf",floor(amount/200));
    amount = fmod(amount,200);
    printf("\n100 ---> %.lf",floor(amount/100));
    amount = fmod(amount,100);
    printf("\n50  ---> %.lf",floor(amount/50));
    amount = fmod(amount,50);
    printf("\n20  ---> %.lf",floor(amount/20));
    amount = fmod(amount,20);
    printf("\n10  ---> %.lf",floor(amount/10));
    amount = fmod(amount,10);
    printf("\n5   ---> %.lf",floor(amount/5));
    amount = fmod(amount,5);
    printf("\n2   ---> %.lf",floor(amount/2));
    amount = fmod(amount,2);
    printf("\n1   ---> %.lf",floor(amount/1));
    return 0;
}