#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s;
    cin>>n>>m;
    s=n*m;
    map<char,int>mp;
    for(int i=0; i<s; i++){
       char c;
       cin>>c;
       mp[c]+=1;
    }
    if(mp['C']==0 && mp['M']==0 && mp['Y']==0){
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
    }
}
