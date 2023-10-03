#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>v;
        v.push_back(1);
        for(int i=1; i<n; i++){
           v.push_back(v[i-1]+2);
        }
        for(auto a:v){
            cout<<a<<" ";
        }
        cout<<"\n";
    }
}
