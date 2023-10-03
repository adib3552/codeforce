#include<iostream>
using namespace std;
int main(){
    long long int t,n,m,p;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        m=n-1;
        p=m-(1+(m-1)/2);
        if(p<0){
            p=0;
        }
        cout<<p<<endl;
    }
}
