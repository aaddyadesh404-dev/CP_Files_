
#include <bits/stdc++.h>
using namespace std;
int remove_dup(string s, int len)
{
    for(int i = 0;  i<len-1; i++)
    {
        int count = 0;
        while( (i+1+count)<len && s[i+count]==s[i+1+count] )
        {
            count++;
        }
        if(count>0)
        {
            s.erase(i+1, count);
            len = s.size(); //WHENEVER YOU CHANGE STRING, MAKE SURE TO CHANGE ITS LENGTH, UNLSS YOU NEED THE OG LENGTH
        }
    }
   
    return s.size();
}
int main(void)
{
    string s;
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n>>s;
        int len = s.size();
        int min = len;
        string tempS = s;
        for(int i = 1; i<len-1; i++)
        {
            s = tempS;
            string s_ = s.erase(i, 1);
            int len_ = remove_dup(s_, s_.size());
            if(len_<min)
            {
                min = len_;
            }
        }
        cout<<min<<endl;
        
    }
    return 0;
}
// O(T*(N*N)) ded