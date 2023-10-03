#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"0\n";
        }
        else if(n==6){
            cout<<"1\n";
        }
        else{
            int i=0;
            while(true){
                if(n%6==0){
                    n/=6;
                    i++;
                }
                else if(n<=2){
                    break;
                }
                else{
                    n*=2;
                    i++;
                }
            }
            if(n==1){
                cout<<i<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
    }
}
