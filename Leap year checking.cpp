#include<iostream>
using namespace std;

int main()
{
    int y;
    cout<<"enter the year:";
    cin>>y;
    if(y%400==0)
    {
     cout<<"the year is leap year";
    }
    else if(y%100==0)
    {
     cout<<"the year is not a leap year";
    }
    else if(y%4==0)
    {
     cout<<"the year is a leap year";
    }
    else
    {
     cout<<"the year is not a leap year";
    }
    return 0;
}