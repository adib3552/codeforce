#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,s,sum=0,t=0;
        string str,str2;
        bool yes=true;
        cin>>m>>s;
        int arr[m];
        for(int i=0; i<m; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        t=(s+sum)*2;
        for(int i=0; i<t; i++){
            if(i*(i+1)==t){
                yes=true;
                break;
            }
            else{
                yes=false;
            }
        }
        if(yes){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
