#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cntm=0,cntc=0;
    cin>>n;
    while(n--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            cntm++;
        }
        else if(c>m){
            cntc++;
        }
    }
    if(cntm>cntc){
        cout<<"Mishka";
    }
    else if(cntc>cntm){
        cout<<"Chris";
    }
    else{
        cout<< "Friendship is magic!^^";
    }
}
