#include<iostream>
using namespace std;
int main(){
    int k,r,i=1;
    cin>>k>>r;
    while(1){
        int mult,rem;
        mult=k*i;
        rem=mult%10;
        if((mult-rem)+r==mult || (mult%10)==0){
            break;
        }
        i++;
    }
    cout<<i;
}
