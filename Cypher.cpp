#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
           int num,c=0;
           cin>>num;
           string s;
           cin>>s;
           for(int j=0; j<num; j++){
               if(s[j]=='U'){
                c++;
               }
               else{
                c--;
               }
           }
           arr2[i]=c;
        }
        for(int i=0; i<n; i++){
            int ans=0;
            ans=arr[i]-arr2[i];
            if(ans>=10){
                ans-=10;
            }
            else if(ans<0){
                ans+=10;
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}
