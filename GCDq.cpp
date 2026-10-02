# include <bits/stdc++.h>
const int N =  1e5;
int main(void)
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n, q;
        std::cin>> n >> q;
        int arr[N+1];
        arr[0] = 0;
        int barr[N+1];

        for(int i = 1; i < n+1; i++)
        {
            std::cin>>arr[i];
        }
        for(int i = n; i>=1; i--)
        {
            barr[i] = arr[n+1-i];
        }
        int gcdf = 0;
        int gcdb = 0;
        int fg[N+1];
        int bg[N+1];
        fg[0] = 0;
        bg[0] = 0;
        for(int i = 1; i<=n;i++)
        {
            fg[i] = std::__gcd(fg[i-1], arr[i]);
            bg[i] = std::__gcd(bg[i-1], arr[n+1-i]);
        }


        while(q--)
        {
            int l, r;
            std::cin>> l>>r;
            std::cout<<std::__gcd(fg[l-1], bg[n-r]);
        }
    }
}