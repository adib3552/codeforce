#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m,i;
    cin>>n>>m;
    i=n;
    i++;
    while(1){
        if(isPrime(i)){
            break;
        }
        else{
            i++;
        }
    }
    //cout<<i<<endl;
    if(i==m){
        cout<<"YES\n";
    }
    else{
       cout<<"NO\n";
    }
}
