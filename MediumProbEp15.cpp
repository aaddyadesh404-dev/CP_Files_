#include <bits/stdc++.h>
const int N = 1e7 + 1;
int main(void)
{
    int q;
    std::cin>>q;
    int n;
    std::cin>>n;
    long long int arr[N];
    for(int i = 1; i<=n ; i++)
    {
        arr[i] = 0;
    }
    while(q--)
    {
        int a, b, k;
        std::cin>> a >> b >> k;
        for(int i = a; i <= b; i++)
        {
            arr[i] += k;
        }
    }
    long long int max = arr[1];
    for(int i = 2; i<=n ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    std::cout<<max<<std::endl;
    return 0;
}
// O(N) + O(Q*N) + O(N)