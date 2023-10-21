#include<bits/stdc++.h>
#define ll long long int
const ll N=1e10+10;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,temp=0,c=0;
        cin>>n;
        vector<ll>v;
        v.push_back(N);
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            if(x!=temp){
                v.push_back(x);
                temp=x;
            }
        }
        v.push_back(N);
        for(int i=1; i<v.size()-1; i++){
            if(v[i]<v[i-1] && v[i]<v[i+1]){
                c++;
            }
        }
        if(c>1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
