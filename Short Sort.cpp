#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='a' && s[1]=='b' && s[2]=='c'){
            cout<<"YES\n";
        }
        else if(s[0]=='a' && (s[1]!='b' || s[2]!='c')){
            cout<<"YES\n";
        }
        else if(s[1]=='b' && (s[0]!='a' || s[2]!='c')){
            cout<<"YES\n";
        }
        else if(s[2]=='c' && (s[0]!='a' || s[1]!='b')){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
