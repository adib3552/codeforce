#include<iostream>
using namespace std;
int main(){
    long long int num,count=0;
    cin>>num;
    while(num!=0){
        if(num>=100){
            num-=100;
            count++;
        }
        else if(num>=20){
            num-=20;
            count++;
        }
        else if(num>=10){
            num-=10;
            count++;
        }
        else if(num>=5){
            num-=5;
            count++;
        }
        else{
            num--;
            count++;
        }
    }
    cout<<count;
}
