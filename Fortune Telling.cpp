#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    if(sum%2!=0){
        cout<<sum;
    }
    else{
       int temp=sum,min;
       for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                min=arr[i];
                break;
            }
       }
       for(int i=0; i<n; i++){
            if(arr[i]%2!=0 && arr[i]<min){
                min=arr[i];
                //cout<<min<<endl;
            }
       }

       sum-=min;
       if(temp==sum){
        cout<<"0";
       }
       else if(sum%2==0){
        cout<<"0";
       }
       else{
        cout<<sum;
       }
    }
}
