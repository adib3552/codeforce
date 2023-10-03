#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int i,c=0;
        for(i=1; i<=n; i++){
            if(n%i!=0){
                break;
            }
            else{
                c++;
            }
        }
        if(n==2){
            c=2;
        }
        cout<<c<<"\n";
    }
}
