#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cf=1,cl=1,ci=0;
        cin>>n>>k;
        int arr[n];
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]+=1;
        }
        if(m[arr[0]]==n || k==1){
            cout<<"YES\n";
        }
        else{
            for(int i=1; i<n-1; i++){
                if(arr[i]==arr[0]){
                    cf++;
                    ci=i;
                }
                if(cf==k){
                    break;
                }
            }
            for(int i=n-2; i>ci; i--){
                if(arr[i]==arr[n-1]){
                    cl++;
                }
                if(cl==k){
                    break;
                }
            }
            //cout<<cf<<" "<<cf;
            if(cf==cl &&cl==k&&cf==k){
                cout<<"YES\n";
            }
            else if(arr[0]==arr[n-1]){
                int sum=cl+cf;
                if(sum>=k){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }

    }
}
