#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0,even=0,oddin,evenin;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0 && arr[i]!=0)
            {
                even++;
                evenin=i;
            }
            else if(arr[i]%2!=0 && arr[i]!=0)
            {
                odd++;
                oddin=i;
            }
        }
        if(odd==n || even==n)
        {
            cout<<"YES\n";
        }
        else
        {
            if(odd>even)
            {
                long long int minOdd=arr[oddin],minEven=arr[evenin];
                for(int i=0; i<n; i++)
                {
                    if(arr[i]%2==0 && arr[i]<minEven)
                    {
                        minEven=arr[i];
                    }
                    else if(arr[i]%2!=0 && arr[i]<minOdd)
                    {
                        minOdd=arr[i];
                    }

                }
                //cout<<minOdd<<" "<<minEven<<endl;
                if((minEven-minOdd)%2!=0 && (minEven-minOdd)>0)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else if(odd==even){
                long long int minOdd=arr[oddin],minEven=arr[evenin];
                for(int i=0; i<n; i++)
                {
                    if(arr[i]%2==0 && arr[i]<minEven)
                    {
                        minEven=arr[i];
                    }
                    else if(arr[i]%2!=0 && arr[i]<minOdd)
                    {
                        minOdd=arr[i];
                    }

                }

                if(minOdd<minEven){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else
            {
                long long int minOdd=arr[oddin],minEven=arr[evenin];
                for(int i=0; i<n; i++)
                {
                    if(arr[i]%2==0 && arr[i]<minEven)
                    {
                        minEven=arr[i];
                    }
                    else if(arr[i]%2!=0 && arr[i]<minOdd)
                    {
                        minOdd=arr[i];
                    }

                }
                //cout<<minOdd<<" "<<minEven<<endl;
                if((minOdd-minEven)%2==0 && (minEven-minOdd)>0)
                {
                    cout<<"YES\n";
                }
                else if(minOdd==1){
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
    }

}

