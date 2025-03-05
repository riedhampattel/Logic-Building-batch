#include<stdio.h>
int main()
{
    int dec,bin[8],rem,i;
    printf("\nEnter the decimal value = ");
    scanf("%d",&dec);//12
    for(i=1;i<=8;i++)//5
    {
        rem = dec%2;
        bin[i-1] = rem;
        dec = dec/2;
    }
    printf("\nBinary value = ");
    for(i=7;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}