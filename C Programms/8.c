#include<stdio.h>
int main()
{
    int cuid,unit;
    double amount,surcharge;
    char name[25];
    printf("\nEnter the customer id = ");
    scanf("%d",&cuid);
    printf("\nEnter the name = ");
    scanf("%s",name);
    printf("\nEnter the unit cosumed = ");
    scanf("%d",&unit);

    if(unit<=199)
    {
        amount = unit*1.20;
        if(amount<100)
        {
            amount = 100;
        }
    }
    else if(unit>=200 && unit<400)
    {
        amount = unit*1.50;
    }
    else if(unit>=400 && unit<600)
    {
        amount = unit*1.80;
    }
    else
    {
        amount = unit*2;
    }
    if(amount>400)
    {
        surcharge = amount*0.15;
        amount = amount + surcharge;
    }
    printf("\nCustomer ID = %d",cuid);
    printf("\nCustomer name = %s",name);
    printf("\nUnit consumed = %d",unit);
    printf("\nbill = %.2lf",amount);
    printf("\nsurcharge = %.2lf",surcharge);
    printf("\nNet payable = %.2lf",amount+surcharge);
    return 0;
}