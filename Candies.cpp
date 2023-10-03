#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,k=1,sum=0;
        cin>>n;
        sum=pow(2,(k+1))-1;
        //cout<<sum<<endl;
        while(n%sum!=0){
            k++;
            sum=pow(2,(k+1))-1;
        }
        x=n/sum;
        cout<<x<<"\n";
    }
}
