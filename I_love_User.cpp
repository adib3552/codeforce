#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=arr[0],max=arr[0];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                c++;
                break;
            }
            else if(arr[j]>max){
                max=arr[j];
                c++;
                break;
            }
        }
    }
    cout<<c;
}
