#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool f=false;
        int l=s.length();
        if(l==1){
            if(s[0]=='Y' || s[0]=='e' || s[0]=='s'){

            }
            else{
                f=true;
            }
        }
        else{
            for(int i=0; i<l-1; i++){
            if(s[i]=='Y' && s[i+1]=='e'){
                //continue;
            }
            else if(s[i]=='e' && s[i+1]=='s'){
                //continue;
            }
            else if(s[i]=='s' && s[i+1]=='Y'){
                //continue;
            }
            else{
                f=true;
                break;
            }
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
