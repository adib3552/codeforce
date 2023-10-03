#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>m;
    for(int i=0; i<n-1; i++){
        string s2="AB";
        s2[0]=s[i];
        s2[1]=s[i+1];
        m[s2]+=1;
    }
    int max=0;
    string maxChar;
    for(map<string,int>::iterator it=m.begin(); it!=m.end(); it++){
        if(it->second>max){
            max=it->second;
            maxChar=it->first;
        }
    }
    cout<<maxChar;
}
