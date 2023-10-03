#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3="abcdefghijklmnopqrstuvwxyz";
    cin>>s1>>s2;
    map<string,int>m;
    for(int i=0; i<s1.length(); i++){
        if(isupper(s1[i])){
            s1[i]+=32;
        }
        if(isupper(s2[i])){
            s2[i]+=32;
        }
    }
    m[s1]++;
    m[s2]++;
    if(s1==s2){
        cout<<"0";
        return 0;
    }
    for(map<string,int>::iterator itr=m.begin(); itr!=m.end(); itr++){

        if(itr->first==s1){
            cout<<"-1";
            return 0;
        }
        if(itr->first==s2){
            cout<<"1";
            return 0;
        }
    }
}
