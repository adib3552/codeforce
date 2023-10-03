#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[64];
        vector<char> v;
        for(int i=0; i<64; i++){
            cin>>arr[i];
            if(arr[i]!='.'){
                v.push_back(arr[i]);
            }
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<"\n";
    }
}
