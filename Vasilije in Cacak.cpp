#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x,sum=0,sum1=0,sum2=0,c=0,temp=0;
        cin>>n>>k>>x;
        if(n==k){
            sum=(n*(n+1))/2;
            if(sum==x){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            sum1=(k*(k+1))/2;
            sum=(n*(n+1))/2;
            c=n-k;
            temp=(c*(c+1))/2;
            sum2=sum-temp;
            if(x>=sum1 && x<=sum2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}
