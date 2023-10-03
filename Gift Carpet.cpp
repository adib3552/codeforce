#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a=0;
        cin>>n>>m;
        bool f[4];
        char arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[j][i]=='v' && !f[0]){
                    f[0]=true;
                    break;
                }
                else if(arr[j][i]=='i' && !f[1] && f[0]){
                    f[1]=true;
                    break;
                }
                else if(arr[j][i]=='k' && !f[2] && f[0] && f[1]){
                    f[2]=true;
                    break;
                }
                else if(arr[j][i]=='a' && !f[3] && f[0] && f[1] && f[2]){
                    f[3]=true;
                    break;
                }

                //cout<<arr[j][i];
            }
            if(!f[0]&&(f[1]||f[2]||f[3])){
                f[0]=false;
            }
            else if(!f[1]&&(f[2]||f[3])){
                f[1]=false;
            }
            else if(!f[2]&&(f[3])){
                f[2]=false;
            }
        }
        for(int i=0; i<4; i++){
            if(f[i]){
                a++;
            }
            f[i]=false;
        }
        if(a==4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
