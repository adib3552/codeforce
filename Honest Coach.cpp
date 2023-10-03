#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,min=1001;
        bool flag=false;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
           for(int i=0; i<n-1; i++){
            if((arr[i+1]-arr[i])<min){
                min=arr[i+1]-arr[i];
            }
           }
           cout<<min<<"\n";

    }
}
