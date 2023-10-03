#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,min,max,co=0;
        cin>>a>>b>>c;
        if(a==b){
            cout<<"0\n";
        }
        else{
            if(a>b){
                max=a;
                min=b;
            }
            else{
                max=b;
                min=a;
            }
            while(min<max){
                co++;
                a=min;
                b=max;
                min+=c;
                max-=c;

            }
            cout<<co<<"\n";

        }
    }
}
