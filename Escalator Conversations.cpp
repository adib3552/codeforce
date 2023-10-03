#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,k,H,max,temp,c=0;
        cin>>n>>m>>k>>H;
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        max=m*k;
        for(int i=0; i<n; i++){
            temp=sqrt(pow((H-arr[i]),2));
            if(temp<max){
               if(temp%k==0 && temp!=0){
                c++;
               }
            }
        }
        cout<<c<<"\n";
    }
}
