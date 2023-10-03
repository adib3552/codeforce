#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int res=1;
    int t;
    cin>>t;
    for(int i=0; i<1000; i++){
        while(res%3==0 || res%10==3){
            res++;
        }
        arr[i]=res;
        res++;
    }
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k-1]<<"\n";

    }
}
