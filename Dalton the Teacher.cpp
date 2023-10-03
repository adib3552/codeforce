#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,a=0,r=0;
        cin>>n;
        int arr[n];
        set<int>s;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        for(auto element:s){
            if(element==arr[a]){
                c++;
            }
            a++;
        }
        if(c%2!=0){
            c++;
        }
        r=c/2;
        cout<<r<<"\n";
    }
}
