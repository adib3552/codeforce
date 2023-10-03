#include<bits/stdc++.h>
using namespace std;
void swapNum(int&a, int&b){
    int& temp=a;
    a=b;
    b=a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        int arr1[n],arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        while(k--){
            int min=arr1[0],max=arr2[0],index1=0,index2=0;
            for(int i=0; i<n; i++){
               if(arr1[i]<min){
                 min=arr1[i];
                 index1=i;
               }
            }
            for(int i=0; i<n; i++){
               if(arr2[i]>max){
                 max=arr2[i];
                 index2=i;
               }
            }
            if(min<max){
                int temp=arr1[index1];
                arr1[index1]=arr2[index2];
                arr2[index2]=temp;
            }
        }
        for(int i=0; i<n; i++){
            sum+=arr1[i];
        }
        cout<<sum<<"\n";

    }
}
