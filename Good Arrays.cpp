#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,mid,c=0;
        cin>>n;
        bool f=false;
        long long int arr[n],brr[n],sum=0,sum2=0,c1=0,temp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1){
                c1++;
            }
        }
        temp=sum-n;
        //cout<<temp<<endl;
        if(n==1){
            cout<<"NO\n";
        }
        else if(temp>=c1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
