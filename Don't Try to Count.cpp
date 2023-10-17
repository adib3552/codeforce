#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        if(s==x){
            cout<<"0\n";
        }
        else{
           int c=0;
           bool f=false;
           while(c<=10){
            int pos=x.find(s);
            if(pos>=0){
                //cout<<x<<endl;
                f=true;
                break;
            }
            x+=x;
            c++;
           }
           if(f){
            cout<<c<<"\n";
           }
           else{
            cout<<"-1\n";
           }
        }
    }
}
