#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,sum=0,sum2=0;
    cin>>n;
    while(1){
       sum+=(c*(c+1))/2;
       //cout<<c<<" "<<sum<<endl;
       if((sum)>n){
        c--;
        break;
       }
       else if(sum==n){
        break;
       }
       else{
        c++;
       }
    }
    cout<<c;
}
