#include<iostream>
using namespace std;
int main(){
    long long int num,sum;
    cin>>num;
    if(num%2==0){
        sum=num/2;
    }
    else{
        sum=(-1)*(num+1)/2;
    }
    cout<<sum<<endl;
}
