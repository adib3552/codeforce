#include<bits/stdc++.h>
//999902
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag=false;
        long long int n,temp;
        cin>>n;
        temp=n;
        while((temp>=2021 || temp>=2020)){
            temp-=2020;
            if(temp==2020 || temp==2021 || temp%2020==0 || temp%2021==0){
                flag=true;
                break;
            }

        }
        temp=n;
        while((temp>=2021 || temp>=2020) && !flag){
            temp-=2021;
            if(temp==2020 || temp==2021 || temp%2020==0 || temp%2021==0){
                flag=true;
                break;
            }

        }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}
