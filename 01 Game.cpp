#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length(),min;
        map<char,int>m;
        for(int i=0; i<l; i++){
            m[s[i]]+=1;
        }
        if(m['0']<m['1']){
            min=m['0'];
        }
        else{
            min=m['1'];
        }

        if(min%2==0){
            cout<<"NET\n";
        }
        else{
            cout<<"DA\n";
        }
    }
}
