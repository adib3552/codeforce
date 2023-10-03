#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,mida,midb;
        cin>>a>>b>>c;
        if(c%2==0){
            mida=c/2;
            midb=c/2;
            a=a+mida;
            b=b+midb;
        }
        else{
            mida=c/2;
            mida++;
            midb=c/2;
            a=a+mida;
            b=b+midb;
        }
        if(a>b){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
}
