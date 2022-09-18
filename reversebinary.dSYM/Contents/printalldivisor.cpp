// PRINT ALL DIVISORS:--------
#include<iostream>
using namespace std;
int printal(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";


    }
    cout<<"\n";
}
int main()
{
    printal(36);
    return 0;
}
