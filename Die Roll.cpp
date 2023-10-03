#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,w,max=0,a,b,l;
    cin>>y>>w;
    if(y>w){
        max=y;
    }
    else{
        max=w;
    }
    l=6-max;
    l++;
    if(6%l!=0){
        if(l%2==0){
            l=l/2;
            cout<<l<<"/3";
            return 0;
        }
        cout<<l<<"/6";
        return 0;
    }
    a=l/l;
    b=6/l;
    cout<<a<<"/"<<b;
}
