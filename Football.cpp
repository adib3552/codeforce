#include<bits/stdc++.h>
using namespace std;
int main(){
    bool yes=false;
    string s;
    cin>>s;
    int l=s.length(),c=1;
    for(int i=0; i<l-1; i++){
       if(s[i]==s[i+1]){
        c++;
       }
       else{
        if(c>=7){
            yes=true;
            break;
        }
        else{
            c=1;
        }
       }

       if(c>=7){
        yes=true;
        break;

       }

    }
    if(yes){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
