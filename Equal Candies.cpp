#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
        //cout<<mini<<endl;
        int result=sum-(n*mini);
        cout<<result<<"\n";
    }
}
