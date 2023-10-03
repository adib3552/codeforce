#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if((a-b)==(b-c)){
            cout<<"YES\n";
        }
        else{
            long long int min,dif,x,temp;
            bool flag=false;

            if(!flag){
                temp=a;
                dif=b-c;
                x=(b+dif)/a;
                a=a*x;
                if((a-b)==(b-c) && x>0){
                    flag=true;
                }
                else{
                    a=temp;
                }
            }
            if(!flag){
                temp=b;
                x=(a+c)/(2*b);
                b=b*x;
                if((a-b)==(b-c) && x>0){
                    flag=true;
                }
                else{
                    b=temp;
                }

            }
            if(!flag){
                temp=c;
                dif=a-b;
                x=(b-dif)/c;
                c=c*x;
                if((a-b)==(b-c) && x>0){
                    flag=true;
                }
                else{
                    c=temp;
                }
            }

            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}
