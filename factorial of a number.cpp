#include<iostream>
using namespace std;

int main()
{
    int n,p;
    cout<<"enter the number to find the factorial: ";
    cin>>n;
    p=1;
    while(n>=1)
    {
     p=p*n;
     n=n-1;
    }
    cout<<"factorial= "<<p;
    return 0;
}