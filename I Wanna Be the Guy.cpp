#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int num,n,num2,sum=0,sum2,p,q;
    cin>>n>>p;
    for(int i=0; i<p; i++){
        cin>>num;
        s.insert(num);
    }
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>num2;
        s.insert(num2);
    }
    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}
