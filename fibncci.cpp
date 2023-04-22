#include <iostream>

using namespace std;
int main()
{
    int n,i=0,m=1,n1,n2,s;

    n1=i;
    n2=m;

    cout<<"Enter the number of terms: ";

    cin>>n;
    if(n==1)
        cout<<i;
    else if(n==2)
        cout<<i<<","<<m;
    else if(n>2)
    {
        cout<<i<<","<<m;
        while(n>2)

        {
            s=n1+n2;
            cout<<","<<s;

            n1=n2;
            n2=s;

            n=n-1;
        }
    }
    return 0;
}