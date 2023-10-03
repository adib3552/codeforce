#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>v,v2;
        long long int ans=0;
        for(int i=0; i<n; i++){
            long long int x,max=0;
            cin>>x;
            v.push_back(x);
            v2.push_back(i+1);
        }
        if(n==1 && v[0]==1){
          ans=v[0]+1;
        }
        else if(n==1 && v[0]!=1){
            ans=1;
        }
        else{
            for(int i=0; i<v.size(); i++){
                if(v[i]==v2[i]){
                    for(int i=0; i<v.size(); i++){
                        v2[i]++;
                    }
                }
            }
            ans=v2[n-1];
        }
        cout<<ans<<"\n";
    }
}
