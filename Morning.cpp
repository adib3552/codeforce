#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int l=s.length(),ans=0;
        int curr=1;
        int next=s[0]-'0';
        if(next==0)
                next=10;
            if(curr==0)
                curr=10;
        ans+=sqrt(pow((curr-next),2));
        for(int i=0; i<l-1; i++){
             curr=s[i]-'0';
             next=s[i+1]-'0';
            if(next==0)
                next=10;
            if(curr==0)
                curr=10;

            ans+=sqrt(pow((curr-next),2));
        }
        ans+=l;
        cout<<ans<<"\n";
    }
}
