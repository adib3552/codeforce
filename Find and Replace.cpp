#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool f=false;
        map<char,char>m;
        for(int i=0; i<n; i++){
            if(i%2==0){
                m[s[i]]='0';
            }
            else{
                m[s[i]]='1';
            }
        }
        for(int i=0; i<n; i++){
            s[i]=m[s[i]];
        }
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                f=true;
                break;
            }
        }
        if(f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}
