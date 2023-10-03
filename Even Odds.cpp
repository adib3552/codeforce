#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,mid,result;
    cin>>n>>k;
    if(n%2!=0){
       mid=(n/2)+1;
    }
    else{
        mid=n/2;
    }
    if(k<=mid){
        result=2*(k-1)+1;
    }
    else{
        long long int temp=k-mid;
        result=2*temp;
    }
    cout<<result;
}
