#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        char d;
        char arr[(n+1)];
        cin>>d;
        string s,s2;
        cin>>s;
        queue<char> q;
        for(int i=0; i<n; i++){
            if(s[i]<d && c==0){
                q.push(d);
                c++;
            }
            q.push(s[i]);
        }
        if(q.size()==n){
            q.push(d);
        }
        while(!q.empty()){
            cout<<q.front();
            q.pop();
        }
        cout<<"\n";

    }
}
