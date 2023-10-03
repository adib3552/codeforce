#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2==0){
            int s=n/2;
            cout<<s<<"\n";
        }
        else{
            int s=(n/2)+1;
            cout<<s<<"\n";
        }
    }
}
