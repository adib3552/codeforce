#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,ans=0;
        cin>>a>>b;
        if(b>a){
            int temp=b;
            b=a;
            a=temp;
        }
        if((2*b)<a){
            ans=a*a;
        }
        else{
            ans=(2*b)*(2*b);
        }
        cout<<ans<<"\n";
    }
}
