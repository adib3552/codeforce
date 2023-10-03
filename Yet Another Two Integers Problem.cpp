#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        int x,r;
        if(a==b){
            cout<<"0\n";
        }
        else{
            x=sqrt(pow((a-b),2));
            if(x<10){
               if(x%9==0){
                 r=x/9;
               }
               else{
                 r=(x/9)+1;
               }
            }
            else{
                if(x%10==0){
                 r=x/10;
               }
               else{
                 r=(x/10)+1;
               }
            }
            cout<<r<<"\n";
        }
    }

}
