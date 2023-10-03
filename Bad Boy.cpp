#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,i,j;
        cin>>n>>m>>i>>j;
        if(i==1 && j==1){
            cout<<"1"<<" "<<m<<" "<<n<<" "<<m<<"\n";
        }
        else if(i==n && j==1){
            cout<<"1"<<" "<<m<<" "<<n<<" "<<m<<"\n";
        }
        else if(i==1 && j==m){
            cout<<"1"<<" "<<"1"<<" "<<n<<" "<<m<<"\n";
        }
        else if(i==n && j==m){
            cout<<"1"<<" "<<"1"<<" "<<n<<" "<<"1"<<"\n";
        }
        else{
            cout<<"1"<<" "<<"1"<<" "<<n<<" "<<m<<"\n";
        }
    }
}
