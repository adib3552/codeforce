#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int a=s[l-1]-'0';
        int ans=10*(a-1)+(l*(l+1))/2;
        cout<<ans<<"\n";
    }
}
