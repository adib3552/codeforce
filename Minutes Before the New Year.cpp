#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m,a,b;
        cin>>h>>m;
        a=h*60+m;
        b=1440-a;
        cout<<b<<"\n";
    }
}
