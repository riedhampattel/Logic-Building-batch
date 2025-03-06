/*
Write a c++ program to print the following pattern
!
! @
! @ !
! @ ! @
! @ ! @ !
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter the row number = ";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                cout<<"@ ";
            }
            else
            {
                cout<<"! ";
            }
        }
        cout<<endl;
    }
    return 0;
}