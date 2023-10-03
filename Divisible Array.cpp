#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=1,sum=0,temp;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            arr[i]=c;
            c++;
        }
        sum=(n*(n+1))/2;
        if(sum%n==0){
            for(int i=0; i<n; i++){
               cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            while(sum%n!=0){
                sum=0;
                for(int i=0; i<n; i++){
                    temp=arr[i]*2;
                    arr[i]=temp;
                    sum+=arr[i];
                }
            }
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
