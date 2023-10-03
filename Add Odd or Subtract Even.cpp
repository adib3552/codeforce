#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c=0,d=0;
        cin>>a>>b;
        if(a==b){
            c=0;
        }
        else{
            d=b-a;
            //cout<<d<<endl;
            if(d%2!=0 && d>0){
                c=1;
            }
            else if(d<0 && d%2==0){
                c=1;
            }
            else if(d>0 && d%2==0){
                c=2;
            }
            else if(d<0 && d%2!=0){
                c=2;
            }

        }
        cout<<c<<"\n";
    }
}
