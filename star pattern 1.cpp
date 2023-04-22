#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the number of raws: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
      j=0;
     while(j<i)
     {
       cout<<"*";
       j=j+1;
                  }
       cout<<"\n";
       i=i+1;
                    }
    
    return 0;
}