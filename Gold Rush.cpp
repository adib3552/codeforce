#include<bits/stdc++.h>
using namespace std;

void find(long long int n,map<long long int,int>&m){
    if(n%3!=0){
        return;
    }
    long long int x=n/3,y=2*x;
    m[x]=1;
    m[y]=1;
    find(x,m);
    find(y,m);
}

int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,m;
       cin>>n>>m;
       if(n==m){
        cout<<"YES\n";
       }
       else{
        map<long long int,int>ma;
        find(n,ma);
        if(ma[m]==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
       }
    }
}


