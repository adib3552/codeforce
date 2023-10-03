#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,q,x,sum=0,temp2;
        cin>>n>>q;
        long long int arr[n];
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0){
                m[0]+=1;
            }
            else{
                m[1]+=1;
            }
        }
        for(int i=0; i<q; i++){
            int temp;
            cin>>temp>>x;
            if(temp==0){
                temp2=x*m[0];
                sum+=temp2;
                if(x%2!=0){
                    m[1]+=m[0];
                    m[0]=0;
                }
            }
            else{
                temp2=x*m[1];
                sum+=temp2;
                if(x%2!=0){
                    m[0]+=m[1];
                    m[1]=0;
                }
            }
            //cout<<m[0]<<" "<<m[1]<<endl;
            cout<<sum<<"\n";
        }
    }
}
