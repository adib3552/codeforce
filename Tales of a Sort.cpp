#include<bits/stdc++.h>
using namespace std;

bool checkSort(long long int arr[],int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool sorted=true;
        set<long long int>s;
        long long int arr[n],temp,ans,r=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(checkSort(arr,n)){
            cout<<"0\n";
        }
        else{
            for(int i=0; i<n; i++){
                temp=arr[i];
                for(int j=0; j<n; j++){
                    ans=arr[j]-temp;
                    if(ans>=0){
                        arr[j]=ans;
                    }
                    else{
                        arr[j]=0;
                    }
                }
                r+=temp;
                if(checkSort(arr,n)){
                    break;
                }
            }
            cout<<r<<"\n";
        }

    }
}
