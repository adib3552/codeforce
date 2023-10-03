#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,r=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                r++;
            }
            else if((arr[i+1]-arr[i])<=1){
                r++;
            }
        }
        if((n-r)==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
