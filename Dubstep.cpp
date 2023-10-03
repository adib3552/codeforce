#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length(),c=0;
    bool found=false;
    for(int i=0; i<l; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    char prev;
    for(int i=0; i<l; i++){
        if(s[i]!=' '){
            cout<<s[i];
            found=true;
        }
        else if(found && prev!=' '){
            cout<<" ";
        }
        prev=s[i];
    }
}
