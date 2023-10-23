#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,even=0,ans=0,min=4,ans2=0;
        cin>>n>>k;
        int arr[n];
        ll prod=1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            //prod*=arr[i];
            if(arr[i]%2==0){
                even++;
            }
        }
        for(int i=0; i<n; i++){
            int temp=0;
            if(arr[i]%k==0){
                ans=0;
                break;
            }
            if(arr[i]%k!=0){
                int temp2=((arr[i]/k)+1)*k;
                temp=temp2-arr[i];
                if(temp<min){
                    min=temp;
                }
            }
            ans=min;
        }
        if(k==4){
            if(even==0)
                ans2=2;
            else if(even==1)
                ans2=1;
            else if(even>=2)
                ans2=0;

            if(ans2<ans)
                ans=ans2;
        }
        cout<<ans<<"\n";
    }
}
