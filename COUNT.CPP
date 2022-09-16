#include<iostream>
using namespace std;

int count_digit(int n)
{
    int x=n;
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    return count;
}
int main()
{
    int n = 123456;
   cout<< "Number of digits in "<<n<<" is "<<count_digit(n);
   return 0;
}
////////////
/*
geeksforgeeks
Q)Given a number N. Count the number of digits in N which evenly divides N.
 
int evenlyDivides(int N){
        int x=N;
        int count=0;
        int temp;
        while(N!=0)
        {
            temp=N%10;
            if(temp!=0 && x%temp==0)
            {
            count++;
            }
            N=N/10;
        }
    return count;
    }
    */