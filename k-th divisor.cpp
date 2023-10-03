#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    vector<long long int>v;
    for(long long int i=1; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i){
                v.push_back(n/i);
            }
        }
    }
    if(k>v.size()){
        cout<<"-1";
        return 0;
    }
    sort(v.begin(),v.end());
    k--;
    cout<<v[k];
}
