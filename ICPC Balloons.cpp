#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0; i<n; i++){
            m[s[i]]+=1;
        }
        for(map<char,int>::iterator it=m.begin(); it!=m.end(); it++){
            it->second++;
            sum+=it->second;
        }
        cout<<sum<<"\n";
    }
}
