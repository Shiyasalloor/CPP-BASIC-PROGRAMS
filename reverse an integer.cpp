#include<iostream>
using namespace std;

int main()
{
    int q,rev,r;
    cout<<"enter the integer: ";
    cin>>q;
    rev=0;
    while(q>0)
    {
      r=q%10;
      rev=(rev*10)+r;
      q=q/10;
                      }
    cout<<"reversed integer =  "<<rev;
    
    return 0;
}