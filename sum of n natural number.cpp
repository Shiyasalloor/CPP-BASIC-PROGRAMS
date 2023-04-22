#include<iostream>
using namespace std;

int main()
{
  int n,sum,i=1;
  cout<<"enter the last natural number: ";
  cin>>n;
  sum=0;
  while(i<=n)
  {
   sum=sum+i;
   i=i+1;
  }
  cout<<"sum=  "<<sum;
    return 0;
}