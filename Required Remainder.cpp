#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,n,temp1=0,temp2=0,a=0;
        cin>>x>>y>>n;
        temp1=n%x;
        temp2=n/x;
        if(temp1<y){
            temp2--;
        }
        a=temp2*x+y;
        cout<<a<<"\n";
    }
}
