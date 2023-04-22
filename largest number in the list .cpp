#include<iostream>
using namespace std;

int main()
{
    int i,n,ln;
    cout<<"enter the number of inputs:";
    cin>>i;
    i=i-1;
    cout<<"enter the first number:";
    cin>>n;
    ln=n;
    while(i>=1)
    {
      cout<<"enter next number to compare:";
      cin>>n;
      if(n>ln)
      {
       ln=n;
      }
      i=i-1;
    }
     cout<<"largest number= "<<ln;
    return 0;
}