#include<iostream>
using namespace std;

int main()
{
   int q,sum,r;
   cout<<"enter the integer : ";
   cin>>q;
   sum=0;
   while(q>0)
   {
     r=q%10;
     sum=sum+r;
     q=q/10;
                }
    cout<<"sum=  "<<sum;
    return 0;
}
    