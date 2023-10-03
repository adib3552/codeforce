#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool found=false,found2=false,found3=false;
        int arr[2][2],arr2[2][2];
        for(int i=0; i<n; i++){
            for(int j=0; j<2; j++){
               for(int k=0; k<2; k++){
                 cin>>arr[j][k];
               }
            }
            if(arr[0][0]==arr[1][1]){
                found=true;
            }
            if(arr[0][1]==arr[1][0]){
                found2=true;
            }
            if(arr[0][0]==arr[0][1] && arr[0][1]==arr[1][1] && arr[1][1]!=arr[1][0]){
                found=false;
            }
            else if(arr[0][0]==arr[1][0] && arr[0][0]==arr[1][1] && arr[0][0]!=arr[0][1]){
                found=false;
            }
            if(found && found2){
                found3=true;
            }
            if(found || found2){
                for(int j=0; j<2; j++){
                   for(int k=0; k<2; k++){
                     arr2[j][k]=arr[j][k];
                   }
                }
            }
            else if(found3){
                for(int j=0; j<2; j++){
                   for(int k=0; k<2; k++){
                     arr2[j][k]=arr[j][k];
                   }
                }
            }
        }
        if(m%2!=0){
            cout<<"NO\n";
        }
        else{
            if(found3){

                cout<<"YES\n";
            }
            else if ((found || found2) && n>=1 && m>2){

                cout<<"YES\n";
            }
            else{
                //cout<<found<<" "<<found2<<"\n";;
                cout<<"NO\n";
            }
        }
    }
}
