#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,n1,n2;
    cin>>n;
    if(n<0){
       long long int temp=n*(-1);
       n1=temp/10;
       n1*=(-1);
       long long int rem=temp%100;
       rem=rem%10;
       temp/=100;
       n2=(temp*10)+rem;
       n2*=(-1);
    }
    else{
       long long int temp=n;
       n1=temp/10;
       //n1*=(-1);
       long long int rem=temp%100;
       rem=rem%10;
       temp/=100;
       n2=(temp*10)+rem;
       //n2*=(-1);
    }
    //cout<<n1<<" "<<n2<<endl;
    if(n1>n && n1>n2){
        cout<<n1;
    }
    else if(n2>n && n2>n1){
        cout<<n2;
    }
    else if(n1>n && n1==n2){
        cout<<n1;
    }
    else{
        cout<<n;
    }
}
