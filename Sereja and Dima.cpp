#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,d=0,points,pointd,sum=0;
    bool flag1=false,flag2=false,flag3=false,flag4=false;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(arr[n-1]>arr[0]){
        points=n-1;
        flag1=true;
        if(arr[n-2]>arr[0]){
            pointd=n-2;
            flag2=true;
        }
        else{
            pointd=0;
        }
    }
    else{
        points=0;
        flag3=true;
        if(arr[1]>arr[n-1]){
            pointd=1;
            flag4=true;
        }
        else{
            pointd=n-1;
        }
    }
    if(flag1 && flag2){
        for(int i=points; i>=0; i-=2){
            s+=arr[i];
        }
        d=sum-s;
        cout<<s<<" "<<d;
    }
    if(flag1 && !flag2){
        for(int i=points; i>=ceil(n/2); i--){
            s+=arr[i];
        }
        d=sum-s;
        cout<<s<<" "<<d;
    }
    if(flag3 && flag4){
        for(int i=points; i<n; i+=2){
            s+=arr[i];
        }
        d=sum-s;
        cout<<s<<" "<<d;
    }
    if(flag3 && !flag4){
        for(int i=points; i<ceil(n/2); i++){
            s+=arr[i];
        }
        d=sum-s;
        cout<<s<<" "<<d;
    }

}
