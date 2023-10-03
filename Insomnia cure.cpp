#include<iostream>
using namespace std;
int main(){
    int k,l,m,n,d,count=0,i1=1,
    i2=1,i3=1,i4=1,mult1=0,mult2=0,mult3=0,
    mult4=0;
    cin>>k>>l>>m>>n>>d;
    while((k*i1)<=d){
        mult1=k*i1;
        count++;
        i1++;
    }
    while((l*i2)<=d && count<d){
        mult2=l*i2;
        if(mult2%k!=0){
            count++;
        }
        i2++;
    }
    while((m*i3)<=d && count<d){
        mult3=m*i3;
        if(mult3%k!=0 && mult3%l!=0){
            count++;
        }
        i3++;
    }
    while((n*i4)<=d && count<d){
        mult4=n*i4;
        if(mult4%k!=0 && mult4%l!=0 && mult4%m!=0){
            count++;
        }
        i4++;
    }

    cout<<count<<endl;

}
