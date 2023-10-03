#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,sum=0,lo=0,hi,mid,temp,ans=0;
        cin>>a>>b;
        sum=a+b;
        hi=min(a,b);
        hi++;
        while(hi-lo>1){
            mid=(hi+lo)/2;
            temp=mid*4;
            if(temp>sum){
                hi=mid;
            }
            else{
                ans=mid;
                lo=mid;
            }
            //cout<<mid<<endl;
        }
        if(sum<4){
            ans=0;
        }
        cout<<ans<<"\n";
    }
}
