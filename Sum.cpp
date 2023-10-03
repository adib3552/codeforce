#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3],sum=0;
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        int max=0;
        for(int i=0; i<3; i++){
            sum+=arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
        }
        if((sum-max)==max){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
