#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,c=0;
    cin>>n;
    for(int i=1; i<n; i++){
        int b=n-i;
        if(b%i==0){
            c++;
        }
    }
    cout<<c;
}
