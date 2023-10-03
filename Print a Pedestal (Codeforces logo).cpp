#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,s,l;
        cin>>n;
        int rem=n%3,eq=n/3;
        f=eq;s=eq;l=eq;
        if(rem!=0){
            f+=rem;
            rem-=rem;
        }
        s++;
        l--;
        if(s>=f){
            s--;
            f++;
        }
        if((f-s)==2&&(l-1)!=0){
            s++;
            l--;
        }
        cout<<s<<" "<<f<<" "<<l<<"\n";

    }
}
