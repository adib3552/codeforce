#include<iostream>
using namespace std;
int main(){
    int a,b,p,sp;
    cin>>a>>b;
    if(a<b){
        p=a;
        sp=(b-a)/2;
    }
    else if(a==b){
        p=a;
        sp=0;
    }
    else{
        p=b;
        sp=(a-b)/2;
    }
    cout<<p<<" "<<sp;

}
