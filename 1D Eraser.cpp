#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,o=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            int c=0;
            if(s[i]=='B'){
                o++;
                while(c<k && i<n){
                    c++;
                    s[i]='W';
                    if(c<k){
                        i++;
                    }
                }
            }
        }
        cout<<o<<"\n";;
    }
}
