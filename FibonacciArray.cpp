#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1 || n==0)
    {
        
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    fib(n);
    cout<<'[';
    for(int i = n; i>=0; i--)
    {
        if(i==0)
        {
            cout<<1;
        }
        cout<<fib(n-i)<<", ";
    }
    cout<<']';

}