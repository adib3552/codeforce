#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length(),c=0;
    for(int i=0; i<l;){
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
            i+=3;
        }
        else if(s[i]=='1'&&s[i+1]=='4'){
            i+=2;
        }
        else if(s[i]=='1'){
            i+=1;
        }
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
