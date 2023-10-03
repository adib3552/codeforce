#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>m;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            m[x]+=1;
        }
        if(m[k]>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
