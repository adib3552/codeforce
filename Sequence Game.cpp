#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,l;
        cin>>n;
        long long int arr[n];
        vector<long long int>v;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            v.push_back(arr[0]);
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                continue;
            }
            v.push_back(arr[i]);

        }
        if(n!=1){
            v.push_back(arr[n-1]);
        }

        l=v.size();
        cout<<l<<"\n";
        for(int i=0; i<l; i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
