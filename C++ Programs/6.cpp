//Write a c++ program to take a character from the user and print it's deciamal and binary equivalent
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int i,rem;
    cout<<"Enter any character = ";
    cin>>ch;
    cout<<"\nCharacter = "<<ch;
    int dec = ch;
    cout<<"\nDecimal = "<<dec;
    int bin[8];
    for(i=0;i<8;i++)
    {
        rem = dec%2;
        bin[i] = rem;
        dec = dec/2;
    }
    cout<<"\nBinary number = ";
    for(i=7;i>=0;i--)
    {
        cout<<bin[i];
    }
    return 0;
}