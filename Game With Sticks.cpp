#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=1;
    cin>>n>>m;
    if(n>m){
        m--;
    }
    else{
        n--;
    }
    while(n!=0 && m!=0){
        //cout<<n<<" "<<m<<endl;
        if(n>m){
            m--;
        }
        else{
            n--;
        }
        c++;
    }
    //cout<<c<<endl;
    if(c%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
}
