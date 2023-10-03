#include<bits/stdc++.h>
using namespace std;
bool checkComp(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    int n,a,b;
    cin>>n;
    if(n%2==0){
       a=n/2;
       b=n/2;
       while(!checkComp(a) || !checkComp(b)){
            a++;
            b--;
        }
    }
    else{
        a=n/2;
        b=a+1;
        while(!checkComp(a) || !checkComp(b)){
            a++;
            b--;
        }
    }
    cout<<a<<" "<<b<<"\n";
}
