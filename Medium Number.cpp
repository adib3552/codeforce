#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int arr[3];
        for(int j=0; j<3; j++){
            cin>>arr[j];
        }
        int temp;
        for(int j=0; j<3; j++){
            for(int k=j+1; k<3; k++){
                if(arr[j]<arr[k]){
                  temp=arr[j];
                  arr[j]=arr[k];
                  arr[k]=temp;
                }
            }
        }
        cout<<arr[1]<<"\n";
    }
}
