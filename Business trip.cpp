#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,c=0,sum=0;
    cin>>k;
    int arr[12];
    for(int i=0; i<12; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>=k){
        while(k>0){
            int max=arr[0],index=0;
            for(int i=0; i<12; i++){
                if(arr[i]>max){
                    max=arr[i];
                    index=i;
                }
            }
            k-=max;
            c++;
            arr[index]=-1;
        }
        cout<<c;
    }
    else{
        cout<<"-1";
    }
}
