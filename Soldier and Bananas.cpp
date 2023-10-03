#include<iostream>
using namespace std;
int main(){
    int k,n,w,i=1,sum=0,lend;
    cin>>k>>n>>w;
    while(i<=w){
        sum+=i*k;
        i++;
    }
    lend=sum-n;
    if(sum>n){
        cout<<lend<<endl;
    }
    else if(sum<=n){
        cout<<"0"<<endl;
    }
}
