#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n;
        string s;
        cin>>s;
        set<char>se;
        bool f=false;
        l=s.length();
        for(int i=0; i<l; i++){
            if(isupper(s[i])){
                s[i]+=32;
            }
            se.insert(s[i]);
        }
        for(int i=0; i<l-1; i++){
            if(se.size()<4){
                break;
            }
            if(s[l-1]!='w'){
                break;
            }
            if(s[i]=='m' && (s[i+1]=='e' || s[i+1]=='m')){
                f=true;
            }
            else if(s[i]=='e' && (s[i+1]=='e' || s[i+1]=='o')){
                f=true;
            }
            else if(s[i]=='o' && (s[i+1]=='o' || s[i+1]=='w')){
                f=true;
            }
            else if(s[i]=='w' && (s[i+1]=='w')){
                f=true;
            }
            else{
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
