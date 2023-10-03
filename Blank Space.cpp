#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,l=0,a=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            c=0;
            if(arr[i]==0){
                a=i;
                while(arr[a]!=1 && a!=n){
                    c++;
                    a++;
                }
                if(c>l){
                    l=c;
                }
            }
        }
        cout<<l<<"\n";
    }
}
