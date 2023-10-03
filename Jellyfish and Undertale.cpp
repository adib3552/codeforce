#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n,ind=0,sum=0,temp=0,c=0,s=0;
        cin>>a>>b>>n;
        vector<long long int>v;
        for(int i=0; i<n; i++){
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        sum+=b;
        for(int i=0; i<n; i++){
            //cout<<sum<<endl;
            if(v[i]==1){
                sum+=1;
            }
            else{
                sum+=(min((v[i]+1),a)-1);
            }
            //cout<<sum<<endl;
        }
        if(a==1){
            sum=1;
        }
        cout<<sum<<"\n";
    }
}
