#include<iostream>
using namespace std;

int main()
{
    int i,m,ln,sn;
    cout<<"enter the no of inputs:";
    cin>>i;
    ln=0;
    while(i>=1)
    {
        cout<<"enter the number:";
        cin>>m;
        if(m>ln)
        {
            sn=ln;
            ln=m;
        }
        else if(m>sn&&m<ln)
        {
            sn=m;
        }
        i=i-1;
    }
    cout<<"second largest number= "<<sn;
    return 0;
}