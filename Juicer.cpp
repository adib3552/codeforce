#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,b,d,sum=0,w=0;
    cin>>n>>b>>d;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>b){
            arr[i]=0;
        }
        sum+=arr[i];
        if(sum>d){
            sum=0;
            w++;
        }
    }
    cout<<w;

}
