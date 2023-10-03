#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[8][8],last;
        int c=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++){
                if(arr[i][j]!='.' && arr[i][j]!='B' && arr[i][j]==arr[i][j+1]){
                   c++;
                }
                else{
                    c=0;
                    break;
                }
                if(c==7){
                    last=arr[i][j];
                }

            }
        }
        c=0;
        for(int j=0; j<8; j++){
            for(int i=0; i<7; i++){
                if(arr[i][j]!='.' && arr[i][j]!='R' && arr[i][j]==arr[i+1][j]){
                   c++;
                }
                else{
                    c=0;
                    break;
                }
                if(c==7){
                    last=arr[i][j];
                }

             }
          }
          cout<<last<<"\n";
        }

}
