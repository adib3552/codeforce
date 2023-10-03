#include<iostream>
using namespace std;
int main(){
    long long int t,a,m;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>m;
        long long int x=0,k=a/m;
        if(a%m!=0)
            x=k*m+m-a;
        else
            x=0;
        cout<<x<<endl;
    }
}
