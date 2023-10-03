#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,a=3,b=0,f=2;
        cin>>n>>x;
        b=a+(x-1);
        if(n==1 || n==2){
            cout<<"1\n";
        }
        else{
            while(1){
                if(n>=a && n<=b){
                    cout<<f<<"\n";
                    break;
                }
                else{
                    a=b+1;
                    b=a+(x-1);
                    f++;
                }
            }
        }
    }
}
