#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        long long int arr[n],sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=sqrt(pow(arr[i],2));
        }
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                c++;
                while(arr[i]<=0){
                    i++;
                }
            }
        }
        cout<<sum<<" "<<c<<"\n";
    }
}
