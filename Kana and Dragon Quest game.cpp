#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=0; i<n; i++){
            if(x>10){
                x/=2;
                x+=10;
            }
            else{
                break;
            }
        }
        for(int i=0; i<m; i++){
            x-=10;
        }
        if(x>0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
