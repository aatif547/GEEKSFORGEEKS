#include<iostream>
using namespace std;
int reverse(int x)//123
{
    int y=0;
    while(x!=0)
    {
        int digit=x%10;//3
        y=y*10+digit;
        x=x/10;

    }
    return y;
}
int main()
{
int x=121;
int temp=x;
int y=reverse(x);
if(temp==y)
{
    cout<<"palindrome";
}
else
cout<<"not a palindrome";
}