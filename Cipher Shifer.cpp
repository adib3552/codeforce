#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        char c;
        cin>>s;
        c=s[0];
        for(int i=1; i<n; i++){
            if(s[i]==c){
                cout<<c;
                if(i<n-1){
                    c=s[i+1];
                    i++;
                }
            }
        }
        cout<<"\n";
    }
}
