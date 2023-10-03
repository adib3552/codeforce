#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    c=n;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0; i<n; i++){
        m[s[i]]+=1;
    }
    if(m['1']<m['0']){
       c=n-(2*m['1']);
    }
    else{
       c=n-(2*m['0']);
    }
    cout<<c;
}
