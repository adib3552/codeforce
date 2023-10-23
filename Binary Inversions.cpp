#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool visited[N];
void sol(int arr[], int& ans, int i, int n){
    if(i>n){
        return;
    }
    cout<<arr[i]<<endl;
    if(visited[i]){
        return;
    }
    if(arr[i]==0){
        ans++;
        i++;
    }
    if(arr[i]==1){
        i++;
        sol(arr,ans,i,n);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,ind=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sol(arr,ans,ind,n);
        cout<<ans<<endl;
    }
}
