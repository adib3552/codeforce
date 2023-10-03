#include<iostream>
using namespace std;
int main(){
    long long int num;
    int rem,count=0;
    cin>>num;
    while(num!=0){
        rem=num%10;
        num/=10;
        if(rem==4 || rem==7){
            count++;
        }
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
