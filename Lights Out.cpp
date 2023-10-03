#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5],arr2[5][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i+1][j+1];
            arr2[i+1][j+1]=1;
        }
    }
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            int temp=arr[i][j];
            if(temp%2!=0){
                if(arr2[i][j]==1){
                    arr2[i][j]=0;
                }
                else{
                    arr2[i][j]=1;
                }
                if(arr2[i-1][j]==1){
                    arr2[i-1][j]=0;
                }
                else{
                    arr2[i-1][j]=1;
                }
                if(arr2[i+1][j]==1){
                    arr2[i+1][j]=0;
                }
                else{
                    arr2[i+1][j]=1;
                }

                if(arr2[i][j-1]==1){
                    arr2[i][j-1]=0;
                }
                else{
                    arr2[i][j-1]=1;
                }
                if(arr2[i][j+1]==1){
                    arr2[i][j+1]=0;
                }
                else{
                    arr2[i][j+1]=1;
                }

            }
        }
    }

    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<arr2[i][j];
        }
        cout<<"\n";
    }
}
