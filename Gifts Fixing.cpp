#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n],b[n],mina,minb,r=0,temp1,temp2,temp;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        mina=a[0];
        minb=b[0];
        for(int i=0; i<n; i++){
            if(a[i]<mina){
                mina=a[i];
            }
            if(b[i]<minb){
                minb=b[i];
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]==mina && b[i]!=minb){
                temp=(b[i]-minb);
                r=r+temp;
            }
            else if(a[i]!=mina && b[i]==minb){
                temp=(a[i]-mina);
                r=r+temp;
            }
            else{
                temp1=a[i]-mina;
                temp2=b[i]-minb;
                if(temp1>temp2){
                    temp=temp1;
                }
                else{
                    temp=temp2;
                }
                r=r+temp;
            }
        }
        cout<<r<<"\n";
    }
}
