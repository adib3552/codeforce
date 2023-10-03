#include<iostream>
using namespace std;
int main(){
    int n,k,count=0,l,j;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        l=(5*i);
        k+=l;
        if(k<=240){
            count++;
        }
    }
    cout<<count;
}
