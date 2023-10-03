#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h,sum=0;
        cin>>b>>c>>h;
        sum+=3;
        b-=2;
        c--;
        while(b!=0 && c!=0){
            b--;
            c--;
            sum+=2;
        }
        while(b!=0 && h!=0){
            b--;
            h--;
            sum+=2;
        }
        cout<<sum<<"\n";
    }
}
