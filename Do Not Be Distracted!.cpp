#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool yes=false;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1; j<n; j++){
                    if(s[i]==s[j]){
                        yes=false;
                        break;
                    }
                    else{
                        yes=true;
                    }
                }
            }
            else{
                yes=true;
            }
            if(!yes){
                break;
            }
        }
        if(n==1){
            yes=true;
        }
        if(yes){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
