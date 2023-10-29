#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0; i<n; i++){
            m[s[i]]+=1;
        }
        for(auto e:m){
            if(e.second%2!=0 && k!=0){
                m[e.first]-=1;
                k--;
            }
            if(k==0){
                break;
            }
        }
        for(auto e:m){
            if(e.second%2!=0){
                c++;
            }
        }
        if(c<=1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
