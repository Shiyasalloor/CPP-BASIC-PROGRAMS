#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,m,i,sum,p,r;
   cout<<"enter the number: ";
   cin>>n;
   sum=0;
   i=0;
   m=n;
   while(m>0)
   {
    m=m/10;
    i=i+1;
   }
   m=n;
   while(m>0)
   {
    r=m%10;
    p=pow(r,i);
    sum=sum+p;
    m=m/10;
   }
   if(sum==n)
   {
    cout<<"this is amstrong number";
   }
   else
   {
    cout<<"this not an amstrong number";
   }
    return 0;
}