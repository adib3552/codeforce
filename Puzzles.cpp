#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>ma;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
        ma[arr[i]]+=1;
    }
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int arr2[n],diff=1000;
    for(int i=0; i<=m-n; i++){
        int temp=arr[i+(n-1)]-arr[i];
        //cout<<temp<<endl;
        if(temp<diff){
            diff=temp;
        }
    }

    cout<<diff;
}
