#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,lo,hi,mid,sum=0,ans=0;
        cin>>n>>x;
        vector<long long int>v;
        for(int i=0; i<n; i++){
            long long int a;
            cin>>a;
            v.push_back(a);
        }
        lo=0;
        hi=1e10+10;;
        while(hi-lo>1){
           mid=(lo+hi)/2;
           //cout<<mid<<endl;
           sum=0;
           for(auto a:v){
             if(a<mid){
                sum+=(mid-a);
             }
           }
           if(sum>x){
            hi=mid;
           }
           else{
            ans=mid;
            lo=mid;
           }
        }
        if(n==1){
            ans=v[0]+x;
        }
        cout<<ans<<"\n";
    }
}
