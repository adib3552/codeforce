#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num=round(n/3.0);
        //cout<<num<<endl;
        int p=sqrt(pow((n-(2*num)),2));
        //p+=num;
        cout<<p<<" "<<num<<"\n";
    }
}
