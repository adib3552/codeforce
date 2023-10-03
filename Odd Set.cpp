#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,oddC=0,evenC=0;
        cin>>n;
        m=2*n;
        for(int i=0; i<m; i++){
            int a;
            cin>>a;
            if(a%2==0){
                evenC++;
            }
            else{
                oddC++;
            }
        }
        if(oddC==evenC){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
