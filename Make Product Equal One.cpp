#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n],m,min,in,r=0,temp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0){
            m++;
            in=i;
            min=arr[i];
        }
    }
    if(m%2!=0){
        for(int i=0; i<n; i++){
            if(arr[i]<=0 && arr[i]>min){
                min=arr[i];
                in=i;
            }
        }
        temp=1-arr[in];
        r=sqrt(pow(temp,2));
        arr[in]=1;
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=1 || arr[i]!=-1){
            if(arr[i]<0){
                temp=-1-arr[i];
                r=r+sqrt(pow(temp,2));
            }
            else{
                temp=arr[i]-1;
                r=r+sqrt(pow(temp,2));
            }
            //cout<<temp<<endl;
        }
    }
    cout<<r;
}
