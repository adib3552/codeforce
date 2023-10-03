#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char> st;
    int n,l;
    string s;
    cin>>n;
    cin>>s;
    if(n<26){
        cout<<"NO"<<endl;
        return 0;
    }
    l=s.length();
    for(int i=0; i<l; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        st.insert(s[i]);
    }
    if(st.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
