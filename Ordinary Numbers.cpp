#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,u;
        cin>>s;
        u=s[0];
        int l=s.length(),a=0;
        bool same=false,big=false;
        if(l==1){
            a=s[0]-'0';
        }
        else{
            for(int i=0; i<l-1; i++){
                a+=9;
                u+=s[0];
            }
        }
        if(u<s){
            big=true;
        }
        if(l!=1){
            for(int i=0; i<l-1; i++){
                if(s[i]==s[i+1]){
                        same=true;
                    }
                    else{
                        same=false;
                        break;
                    }
            }
        }

        if(same){
            int num=s[0]-'0';
            a+=num;
        }
        else if(!same && l!=1){
           int num=s[0]-'0';
           num--;
           a+=num;
        }
        if(big){
            a++;
        }

        cout<<a<<"\n";

    }
}
