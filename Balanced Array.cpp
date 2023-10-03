#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,sum=0,sum2=0;
        bool flag=false;
        cin>>n;
        if((n/2)%2==0)
        {
            cout<<"YES\n";
            flag=true;
        }
        else
        {
            cout<<"NO\n";
        }
        if(flag)
        {
            int arr[n];
            for(int i=0; i<(n/2); i++)
            {
                arr[i]=2*(i+1);
                sum+=arr[i];
            }
            c=(n/2);
            for(int i=0; i<(n/2); i++)
            {
                arr[c]=2*i+1;
                c++;
            }
            for(int i=n/2; i<n-1; i++)
            {
                sum2+=arr[i];
            }
            arr[n-1]=sum-sum2;
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
