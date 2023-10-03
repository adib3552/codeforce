#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=0,c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
           c++;
           //cout<<c<<endl;
        }
        else{
            c++;
            if(c>max){
                max=c;
            }
            c=0;
        }
        if(i==(n-2)){
           c++;
            if(c>max){
                max=c;
            }
            c=0;
        }
    }
    if(max==0 && n==1){max=1;}
    cout<<max;
}
