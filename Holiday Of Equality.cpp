#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m=arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<m){
            sum+=m-arr[i];
        }
    }
    cout<<sum;
}
