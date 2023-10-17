#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;
ll binExp(ll a, ll b) {
    ll ans=1;
    while(b){
        if(b&1){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b >>= 1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c1=0,mult=1,ans=0;
        cin>>n;
        vector<ll>v;
        vector<ll>v2;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++){
            ll temp=v[i];
            while(temp%2==0){
                c1++;
                temp/=2;
            }
            int a=i+1,c2=0;
            while(a%2==0){
                c2++;
                a/=2;
            }
            if(c2!=0){
                v2.push_back(c2);
            }
        }
        sort(v2.begin(),v2.end());
        for(int i=v2.size()-1; i>=0; i--){
            if(c1>=n){
                break;
            }
            ans++;
            c1+=v2[i];
        }
        if(c1<n){
            cout<<"-1\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }
}
