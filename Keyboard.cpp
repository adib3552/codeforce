#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    string s,str="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>s;
    int l=s.length(),l2=str.length();
    for(int i=0; i<l; i++){
        if(c=='R'){
            char a=s[i];
            for(int i=0; i<l2; i++){
                if(str[i]==a){
                    i--;
                    cout<<str[i];
                    break;
                }
            }
        }
        else {
            char a=s[i];
            for(int i=0; i<l2; i++){
                if(str[i]==a){
                    i++;
                    cout<<str[i];
                    break;
                }
            }
        }
    }
}
