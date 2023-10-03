#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,mi,s;
        cin>>n;
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>mi>>s;
            if(m[s]==0){
                m[s]=mi;
            }
            else if(m[s]>mi){
                m[s]=mi;
            }
        }
        if(m[11]==0){
            int sum=m[10]+m[1];
            if(m[1]!=0 && m[10]!=0){
                cout<<sum<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
        else{
            int sum=m[10]+m[1];
            if(m[10]==0 || m[1]==0){
                cout<<m[11]<<"\n";
            }
            else if(sum<m[11]){
                cout<<sum<<"\n";
            }
            else{
                cout<<m[11]<<"\n";
            }
        }


    }
}

