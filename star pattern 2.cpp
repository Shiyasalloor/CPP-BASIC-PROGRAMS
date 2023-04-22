#include<iostream>
using namespace std;

int main()
{
    int s,r;

    cout <<"Enter number of rows: ";
    cin >> r;

    for(int i = 1, k = 0; i <= r; ++i, k = 0)
    {
        for(s = 1; s <= r-i; ++s)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
