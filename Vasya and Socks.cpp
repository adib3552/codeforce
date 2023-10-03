#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n==m){
        n++;
        cout<<n;
    }
    else if(m>n){
        cout<<n;
    }
    else{
        int temp=1;
        for(int i=1; i<=n; i++){
            if(temp==m){
                temp=1;
                n++;
            }
            else{
                temp++;
            }
            //cout<<n<<endl;
        }


        cout<<n;
    }
}
