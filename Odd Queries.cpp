#include<bits/stdc++.h>
using namespace std;
#define fastkor ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
int main(){
    fastkor;
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<n; i++){
            arr[i]+=arr[i-1];
        }
        while(q--){
            long long int l,r,k,temp,temp2,sum2=0,sum,sum3;
            cin>>l>>r>>k;
            temp=r-l+1;
            temp2=r-temp;
            //cout<<temp2<<endl;
            r--;
            if(temp2!=0){
                temp2--;
                sum2=arr[r]-arr[temp2];
            }
            else{
                sum2=arr[r];
            }
            sum3=arr[n-1]-sum2;
            sum =(k*temp)+sum3;
            //cout<<sum<<endl;
            if(sum%2!=0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}
