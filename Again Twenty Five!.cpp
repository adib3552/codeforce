#include<bits/stdc++.h>
using namespace std;
long long int binPow(int num, int exp){
    if(exp==0){
        return 1;
    }
    long long int a=binPow(num,exp/2);
    if(exp%2==0){
        return a*a;
    }
    else{
        return a*a*num;
    }
}
int main(){
    int num;
    cin>>num;
    long long int res =binPow(5,num);
    int a=res%10;
    res/=10;
    int b=res%10;
    cout<<b<<a;
}
