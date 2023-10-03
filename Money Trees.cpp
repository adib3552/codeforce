#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int h[n],a[n];
        vector<int>c;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        for(int i=1; i<n; i++){
            a[i]+=a[i-1];
        }

    }
}
