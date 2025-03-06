//Write a c++ program to print factorial using recurion
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num!=0)
    {
        return num * factorial(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    int answer = factorial(num); 
    cout<<"\nThe factorial of "<<num<<" is = "<<answer;
    return 0;
}