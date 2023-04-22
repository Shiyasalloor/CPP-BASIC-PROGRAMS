#include<iostream>
using namespace std;

int main()
{
 int n,i;
 cout<<"enter the number: ";
 cin>>n;
 i=2;
 while(i<=(n/2))
 {
  if(n%i==0)
  {
    break;
  }
  else 
  {
    i=i+1;
  }
 }
 if(i>(n/2))
 {
   cout<<"this is a prime number";
 }
 else
 {
   cout<<"this is not a prime number";
 }
 return 0;
}
 