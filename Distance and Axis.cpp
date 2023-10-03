#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,diff=0,b=0,c=0,temp;
        cin>>n>>k;
        if(k==0){
            if(n%2==0){
                cout<<"0\n";
            }
            else{
                cout<<"1\n";
            }
        }
        else{
            if(n>k){
                while(1){
                   temp=n+k;
                   if(temp%2==0){
                    diff=c;
                    break;
                   }
                   else{
                    c++;
                    diff=c;
                    n--;
                   }
                }
            }
            else{
                 diff=sqrt(pow((n-k),2));
            }
            cout<<diff<<"\n";
        }
    }
}
