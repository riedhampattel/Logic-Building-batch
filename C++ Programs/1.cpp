/*
Write a c++ program to make unit converter using switch case including
km ---> m
m ---> km
kg ---> g
hr ---> min
min ---> sec
*/
#include<iostream>
using namespace std;
int main()
{
    int choice,num;
    cout<<"1.Km to m"<<endl;
    cout<<"2.m to Km"<<endl;
    cout<<"3.Kg to gm"<<endl;
    cout<<"4.hr to min"<<endl;
    cout<<"5.min to sec"<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\nEnter the kilometers = ";
            cin>>num;
            cout<<"\nKm to m = "<<num*1000;
        break;
        case 2:
            cout<<"\nEnter the meters = ";
            cin>>num;
            cout<<"\nm to Km = "<<(float)num/(float)1000;
        break;
        case 3:
            cout<<"\nEnter the kilograms = ";
            cin>>num;
            cout<<"\nKg to gm = "<<num*1000;
        break;
        case 4:
            cout<<"\nEnter the hours = ";
            cin>>num;
            cout<<"\nhr to min = "<<num*60;
        break;
        case 5:
            cout<<"\nEnter the minutes = ";
            cin>>num;
            cout<<"\nmin to sec = "<<num*60;
        break;
    }
    return 0;
}