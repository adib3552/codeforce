#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,min,max=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        min=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]<=min){
                min=arr[i];
            }
        }
        //cout<<max<<" "<<min<<endl;
        int ans=max-min;
        cout<<ans<<"\n";
    }
}
