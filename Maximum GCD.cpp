#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return (b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            n--;
            int c=n/2;
            cout<<gcd(c,n)<<"\n";
        }
        else{
            int c=n/2;
            cout<<gcd(c,n)<<"\n";
        }
    }
}
