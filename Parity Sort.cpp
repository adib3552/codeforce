#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool f=false;
        long long int arr[n];
        multiset<long long int>s;
        vector<long long int>v;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        for(auto element:s){
            v.push_back(element);
        }

        for(int i=0; i<n; i++){
            if(v[i]%2==0 && arr[i]%2==0){
                f=true;
            }
            else if(v[i]%2!=0 && arr[i]%2!=0){
                f=true;
            }
            else{
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
