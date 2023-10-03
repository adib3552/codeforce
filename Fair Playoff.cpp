#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,r1,r2;
        cin>>a>>b>>c>>d;
        int arr[4];
        arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if(arr[j]>arr[i]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        if(a>b){
            r1=a;
        }
        else{
            r1=b;
        }
        if(c>d){
            r2=c;
        }
        else{
            r2=d;
        }
        if((arr[0]==r1 && arr[1]==r2) || (arr[0]==r2 && arr[1]==r1)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
