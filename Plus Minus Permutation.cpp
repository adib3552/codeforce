#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,y,sum1,sum2,sum3,tempx,tempy,temp,c=0,lcm;
        cin>>n>>x>>y;
        tempx=n/x;
        tempy=n/y;

        lcm=(x*y)/gcd(x,y);
        c=n/lcm;


        tempy-=c;

        sum1=(n*(n+1))/2;
        temp=n-tempx+c;
        sum2=(temp*(temp+1))/2;
        sum3=sum1-sum2;

        sum1=(tempy*(tempy+1))/2;

        sum3-=sum1;

        //cout<<c<<"\n";
        cout<<sum3<<"\n";

    }
}
