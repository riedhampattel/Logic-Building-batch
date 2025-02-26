#include<stdio.h>
int main()
{
    int n1,n2;
    printf("\nEnter the value in n1 = ");
    scanf("%d",&n1);
    printf("\nEnter the value in n2 = ");
    scanf("%d",&n2);

    n1>n2 ? printf("\n%d is a biggest number",n1) : printf("\n%d is a biggest number",n2);
    return 0;
}