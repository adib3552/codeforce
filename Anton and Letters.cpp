#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    int count,l;
    set<char> st;
    getline(cin,s);
    l=s.length();
    for(int i=0; i<l; i++){
        if(s[i]>='A' && s[i]<='z'){
            st.insert(s[i]);
        }
    }
    cout<<st.size()<<endl;
}
