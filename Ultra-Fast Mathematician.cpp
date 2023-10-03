#include<iostream>
using namespace std;
int main(){
    string num1,num2;
    cin>>num1>>num2;
    string sum=num1;
    for(int i=0; i<num1.length(); i++){
        if(num1[i]=='1' && num2[i]=='1' ||
           num1[i]=='0' && num2[i]=='0'){
                sum[i]='0';
           }
        else{
                sum[i]='1';
        }
    }
    cout<<sum;
}
