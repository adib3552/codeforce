#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,a="codeforces";
        cin>>s;
        int l=s.length(),c=0;
        for(int i=0; i<l; i++){
            if(s[i]!=a[i]){
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
