#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a=0,b=0,arr[n],res;
        for(int i=0; i<n; i++){
            arr[i]=pow(2,(i+1));
        }
        a+=arr[n-1];
        int l=(n/2)-1,c=0;
        for(;c<l; c++){
            a+=arr[c];
        }
        for(;c<(n-1); c++){
            b+=arr[c];
        }
        res=sqrt(pow((a-b),2));
        cout<<res<<"\n";
    }
}
