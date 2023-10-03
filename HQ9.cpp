#include<bits/stdc++.h>
using namespace std;
int main(){
    string p,s="HQ9";
    cin>>p;
    int l=s.length(),l2=p.length();
    bool found=false;
    for(int i=0; i<l2; i++){
        for(int j=0; j<l; j++){
            if(p[i]==s[j]){
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(found){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
