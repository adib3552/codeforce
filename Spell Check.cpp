#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string name="Timur";
    while(t--){
        int n;
        cin>>n;
        bool flag=false;
        string s;
        cin>>s;
        if(s.length()==5){
            for(int i=0; i<5; i++){
                for(int j=0; j<n; j++){
                    if(name[i]==s[j]){
                        s[j]='1';
                        break;
                    }
                }
            }
            for(int i=0; i<n; i++){
                if(s[i]!='1'){
                    flag=true;
                    break;
                }
            }

        }
        else{
            flag=true;
        }

        if(!flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
