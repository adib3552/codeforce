#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,max,smax,temp=0;
        int c=0;
        cin>>n;
        long long int arr[n];
        bool f=false;
        vector<long long int>v;
        map<long long int,int>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]+=1;

        }
        max=arr[0];
        if(n==arr[0]){
            if(m[n]==arr[n-1]){
                smax=max-m[arr[n-1]];
                for(int i=0; i<n; i++){
                    if(arr[i]!=max){
                       temp=arr[i];
                       break;
                    }
                }
                if(temp==smax){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}
