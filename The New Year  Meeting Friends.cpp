#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,t1,t2,t3,t;
    cin>>x1>>x2>>x3;
    t1=sqrt(pow((x1-x2),2))+sqrt(pow((x1-x3),2));
    t2=sqrt(pow((x2-x1),2))+sqrt(pow((x2-x3),2));
    t3=sqrt(pow((x3-x2),2))+sqrt(pow((x3-x1),2));

    if(t1<t2 && t1<t3){
        t=t1;
    }
    else if(t2<t1 && t2<t3){
        t=t2;
    }
    else if(t3<t2 && t3<t1){
        t=t3;
    }
    cout<<t;
}
