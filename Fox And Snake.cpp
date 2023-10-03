#include<iostream>
using namespace std;
int main(){
    int n,m,b;
    cin>>n>>m;
    b=m-1;
    string a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i+1)%2!=0){
                a[i][j]='#';
            }
            else{
                a[i][j]='.';
            }
        }
        if(b==m-1 && (i+1)%2==0){
                a[i][b]='#';
                b=0;
            }
            else if(b==0 && (i+1)%2==0){
                a[i][b]='#';
                b=m-1;
            }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}
