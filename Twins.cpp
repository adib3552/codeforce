#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,sum2=0,c=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
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
    sum2+=arr[n-1];
    sum-=arr[n-1];
    for(int i=n-2; i>=0; i--){
       if(sum2>sum){
        break;
       }
       else{
        c++;
       }
       sum2+=arr[i];
       sum-=arr[i];
    }
    cout<<c;

}
