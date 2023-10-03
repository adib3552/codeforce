#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,n,temp1,temp2,temp,x;
        cin>>a>>b>>c>>n;
        if(a>=b && a>=c){
            temp1=a-b;
            temp2=a-c;
            temp=temp1+temp2;
        }
        else if(b>=a && b>=c){
            temp1=b-a;
            temp2=b-c;
            temp=temp1+temp2;
        }
        else{
            temp1=c-a;
            temp2=c-b;
            temp=temp1+temp2;
        }
        x=n-temp;
        if(x<0){
            cout<<"NO\n";
        }
        else if(x%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
