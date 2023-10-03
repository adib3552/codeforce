#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int w,h,n,cw=0,ch=0,c=0;
        cin>>w>>h>>n;
        while(w%2==0){
            cw++;
            w/=2;
        }
        while(h%2==0){
            ch++;
            h/=2;
        }

        c=pow(2,(cw+ch));

        if(c>=n){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
