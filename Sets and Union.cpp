#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,in=0;
        cin>>n;
        vector<int>v[n];
        set<int>s;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            for(int j=0; j<x; j++){
                int a;
                cin>>a;
                v[i].push_back(a);
                s.insert(a);
            }
        }
        int ans=0;
        for(auto e:s){
            int si=0;
            set<int>s2;
            for(int i=0; i<n; i++){
                bool f=false;
                for(auto a:v[i]){
                    if(e==a){
                        f=true;
                        break;
                    }
                }
                if(!f){
                    for(auto a:v[i]){
                        s2.insert(a);
                    }
                }

            }
            si+=s2.size();
            if(si!=s.size()){
                ans=max(ans,si);
            }
        }
        cout<<ans<<"\n";

    }
}
