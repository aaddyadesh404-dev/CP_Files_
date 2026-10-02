#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    int n;
    string s;
    char c;
    while(t--)
    {
        cin>>n;
        cin>>c;
        cin>>s;
        int len = s.size();
        int count = 0;
        for(int i = 0; i<len/2; i++)
        {
            if(s[i]!=s[len-1-i])
            {
                if((s[i]==c)||(s[len-1-i]==c))
                {
                    count++;
                    //cout<<"i is "<<i<<" and count is "<<count<<endl;
                }
                else
                {
                    count=count+2;
                    //cout<<"i is "<<" and count is "<<count<<endl;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
    

}