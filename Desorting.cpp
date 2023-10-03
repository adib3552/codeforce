#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp,temp2;
        bool f=false;
        cin>>n;
        long long int arr[n];
        set<int>s;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                f=true;
                break;
            }
        }
        if(f){
            cout<<"0\n";
        }
        else{
            for(int i=0; i<n-1; i++){
                s.insert(sqrt(pow((arr[i]-arr[i+1]),2)));
            }
            for(auto element:s){
                temp=element;
                break;
            }
            temp2=temp/2;
            temp2++;
            cout<<temp2<<"\n";
        }
    }
}
