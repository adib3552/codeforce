#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a=0,b,temp,s,rem=0;
        cin>>n;
        temp=n;
        while(temp>=10){
            rem=temp%10;
            temp-=rem;
            a=a+(temp/10);
            temp/=10;
            temp+=rem;
        }
        b=n+a;
        if(n<10){
            cout<<n<<"\n";
        }
        else{
            cout<<b<<"\n";
        }
    }
}
