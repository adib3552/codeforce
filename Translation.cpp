#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    string s,t;
    bool reverse=true;
    stack<char> a;
    queue<char> b;
    cin>>s>>t;
    for(int i=0; i<s.length(); i++){
        a.push(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        b.push(t[i]);
    }
    while(!a.empty()){
        if(a.top()!=b.front()){
            reverse=false;
            break;
        }
        a.pop();
        b.pop();
    }
    if(reverse){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
