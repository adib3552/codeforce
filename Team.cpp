#include<iostream>
using namespace std;
int main(){
    int n, count=0, p, v, t, c=0;
    cin>>n;
    for (int i=0; i<n; i++){
        count=0;
        cin>>p>>v>>t;
        if((p+v+t)>1){
            count++;
        }
        if(count>=1){
            c++;
        }
    }
    cout<<c;
}
