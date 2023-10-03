#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,result=0;
        cin>>n>>m;
        if(n>4){
            if(m%2==0){
               result=(m/2)*4;
            }
            else{
                result=m*2;
            }
        }
        else if(n==2 || n==3){
            if(m==1 && n==3){
                result=2;
            }
            else{
                result=m;
            }
        }
        else if(n==1){
            result=0;
        }
        else{
            if(m%2==0){
                result=(m/2)+m;
            }
            else if(m==1){
                result=2;
            }
            else{
                result=((m/2)+1)+m;
            }
        }
        cout<<result<<"\n";
    }
}
