#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            arr[i]=(i+1);
        }
        if(n%2!=0){
            int a=(n/2);
            int temp=arr[a];
            arr[a]=arr[0];
            arr[0]=temp;
        }
        for(int i=n-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}
