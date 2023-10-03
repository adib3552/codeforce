#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d,x,y,w,v;
        cin>>n>>a>>b>>c>>d;
        bool f=false;
        v=a-b;
        w=a+b;
        x=c-d;
        y=c+d;
        if(n*v>y || n*w<x){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
