#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,k,r=0,temp=0;
       cin>>n>>k;
       if(n%2==0){
          r=n+(k*2);
       }
       else{
          for(int i=2; i<=n; i++){
            if(n%i==0){
                temp=i;
                break;
            }
          }
          k--;
          n=n+temp;
          r=n+(k*2);
       }
       cout<<r<<"\n";
    }
}
