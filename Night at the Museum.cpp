#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    map<char,int> m;
    for(int i=0; i<26; i++){
        m[s2[i]]=(i+1);
    }
    char cur='a';
    int l=s.length(),sum=0;
    for(int i=0; i<l; i++){
        int c=0,c1=0;
        if(s[i]>cur){
            c=26-(m[s[i]]-m[cur]);
            c1=(m[s[i]]-m[cur]);
        }
        else if(cur>s[i]){
            c=26-(m[cur]-m[s[i]]);
            c1=(m[cur]-m[s[i]]);
        }
        if(c<c1){
            sum+=c;
        }
        else{
            sum+=c1;
        }
        cur=s[i];
    }
    cout<<sum;
}
