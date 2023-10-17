#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,m,sum=0;
        cin>>a>>b>>c;
        if(a==b && a==c){
            cout<<"YES\n";
        }
        else{
           m=min(a,b);
           m=min(m,c);
           if(a%m!=0 || b%m!=0 || c%m!=0){
            cout<<"NO\n";
           }
           else{
            sum=((a/m)-1)+((b/m)-1)+((c/m)-1);
            if(sum<=3){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
           }
        }
    }
}
