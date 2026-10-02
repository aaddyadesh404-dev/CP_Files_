#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int t, k, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k;
        long long int proj = 0;
        if(x>=y)
        {
            proj = x-y;
        }
        else
        {
            long long int dif = y - x;
            if(k-1-dif>0)
                proj += (k-1-dif)*dif;
            
            for(long long int i = 0; i<=dif && i<k; i++)
            {
                proj += (y+i)%(x+i);
            }
            //proj+=(k-1)*k/2 - k;

        }
        
        cout<<proj<<endl;

    }
    return 0;
}
// O(T*K)  ka zhed hata diya