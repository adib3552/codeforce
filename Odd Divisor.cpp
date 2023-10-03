#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES\n";
        }
        else{
            while(n!=1){
                if(n%2!=0){
                    break;
                }
                n/=2;
            }
            if(n==1){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
}
