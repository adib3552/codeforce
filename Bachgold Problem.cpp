#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    k=n/2;
    int arr[k];
    for(int i=0; i<k; i++){
        arr[i]=2;
    }
    if(n%2!=0){
        arr[k-1]++;
    }
    cout<<k<<"\n";
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}
