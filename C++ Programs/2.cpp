/*
Write a c++ program to print all the missing numbers among all the 10 numbers entered by the user (*prompt user to enter any 10 numbers between 1 - 50)
*/
#include<iostream>
using namespace std;
int main()
{
    int num[10],n,i,j;
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter any number between 1 - 50 = ";
        cin>>n;
        num[i] = n;
    }
    //{1,45,36,25,14,20,22,23,45,7}
    // 0 1   2  3  4  5  6  7 8  9
    for(i=1;i<=50;i++)
    {
        int flag = 1;
        for(j=0;j<10;j++)
        {
            if(i==num[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}