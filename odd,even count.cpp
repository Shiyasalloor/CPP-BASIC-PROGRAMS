#include<iostream>
using namespace std;

int main()
{
    int i,n,evencount,oddcount;
    cout<<"enter the number of inputs: ";
    cin>>i;
    
    
    evencount=0;
    oddcount=0;
    
    while(i>0)
    {
         cout<<"enter the input integer: ";
         cin>>n;
         if(n%2==0)
         {
           evencount++;
         }
         else
         {
           oddcount++;
         }
        i=i-1;
     }
    
    cout<<"the no of even numbers= "<<evencount<<"\n";
    cout<<"the no of odd numbers="<<oddcount;
    return 0;
}