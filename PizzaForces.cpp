#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<int,int>m;
    m[6]=15;
    m[8]=20;
    m[10]=25;
    while(t--){
        long long int n,x=0,a=0,b=0;
        cin>>n;
        if(n<=6){
            cout<<m[6]<<"\n";
        }
        else if(n<=8){
            cout<<m[8]<<"\n";
        }
        else if(n<=10){
            cout<<m[10]<<"\n";
        }
        else{
            if(n%2!=0){
                n++;
            }
            x=n/6;
            x--;
            a=n-x*6;
            b=x*m[6]+m[a];
            cout<<b<<"\n";
        }

    }
}
