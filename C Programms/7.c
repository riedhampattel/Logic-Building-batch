#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\nEnter the value in n1 = ");
    scanf("%d",&n1);
    printf("\nEnter the value in n2 = ");
    scanf("%d",&n2);
    printf("\nEnter the value in n3 = ");
    scanf("%d",&n3);

    n1>n2 ? n1>n3? printf("\n%d is the biggest number",n1):printf("\n%d is the biggest number",n3): n2>n3 ? printf("\n%d is the biggest number",n2):printf("\n%d is the biggest number",n3);
    return 0;
}