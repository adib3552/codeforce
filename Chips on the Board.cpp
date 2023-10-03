#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<long long int>sa;
        set<long long int>sb;
        long long int a[n],b[n],suma=0,sumb=0,sum1=0,temp=0,sum2=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            suma+=a[i];
            sa.insert(a[i]);
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            sumb+=b[i];
            sb.insert(b[i]);
        }
        for(auto e:sa){
            temp=e*n;
            break;
        }
        sum1=sumb+temp;
        for(auto e:sb){
            temp=e*n;
            break;
        }
        sum2=suma+temp;
        if(sum1<sum2){
            cout<<sum1<<"\n";
        }
        else{
            cout<<sum2<<"\n";
        }
    }
}
