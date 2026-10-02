#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int A[n];
        int B[101];
        //int Ans[2000];
        //int ele=0;
        for(int i = 1; i<101 ; i++)
        {
            B[i]=0;
        }
        int max=0;
        for(int i = 0; i < n ; i++)
        {
            cin>>A[i];
            B[A[i]]++;
        }
        for(int i = 0; i<n; i++)
        {
            if(A[i]>max)
            {
                max = A[i];
            }
        }
        
        //for(int i = 1; i<101; i++)
        //{
        //    cout<<"B["<<i<<"] is : "<<B[i]<<endl;
        //}
        //cout<<max<<endl;
        //cout<<sum;

        
        while(max)
        {
            //cout<<"Max is "<<max<<endl;
            int flag = 0;
            for(int i = 0; i<n; i++)
            {
                if(A[i]==max)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            {
                int z = B[max];
                while(B[max])
                {
                    cout<<max<<" ";
                    B[max]--;
                }
                //cout<<endl;
                int counter = 100;
                //cout<<endl<<"z is "<<z<<endl;
                while(counter)
                {
                    //cout<<"counter is : "<<counter<<" and its freq is "<<B[counter]<<endl;
                    int printed = 0;
                    while(printed<z)
                    {
                        if(B[counter]>0)
                        {
                            cout<<counter<<" ";
                            B[counter]--;
                            printed++;
                        }
                        else
                        {
                            printed++;
                        }
                        //cout<<"freq changed to "<<B[counter]<<endl;
                    }
                    counter--;
                }
            }
            max--;
        } 
        cout<<endl;         
    }
}