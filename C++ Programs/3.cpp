/*
Write a c++ program to print the following pattern
a
a b
a b c
a b c d
a b c d e
*/
#include<iostream>
using namespace std;
int main()
{
    char ch='a';
    int row,i,j;
    cout<<"Enter the row count = ";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        ch='a';
        for(j=1;j<=i;j++)//5
        {
            cout<<ch++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}