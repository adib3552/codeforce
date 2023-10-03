#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        for (int i=0; i<l; i++){
            for (int j=i+1; j<l-1; j++){
                if(s[i]==s[j]){
                    //s[i]='0';
                    s[j]='0';
                    break;
                }
            }
        }

        for(int i=0; i<l; i++){
            if(s[i]!='0'){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}
