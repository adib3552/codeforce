#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int l,r,a,n,temp,arr[21],x,y,max;
        cin>>l>>r>>a;
        temp=r-l;
        if(temp<20){
            n=temp;
        }
        else{
            n=20;
        }
        for(int i=0; i<=n; i++){
           x=r/a;
           y=r%a;
           arr[i]=(x+y);
           r--;
        }
        max=arr[0];
        for(int i=0; i<=n; i++){
           if(arr[i]>max){
                max=arr[i];
           }
        }
        cout<<max<<"\n";

    }
}
