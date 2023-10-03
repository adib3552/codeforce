#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int c1=1,c2=1,max1=1,max2=1,ans=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            c1++;
        }
        else{
            for(int j=i+1; j<n-1; j++){
                if(arr[j]==arr[j+1]){
                    c2++;
                }
                else{
                    ans=max(ans,2*min(c1,c2));
                    c2=1;
                    break;
                }
                ans=max(ans,2*min(c1,c2));
            }
            ans=max(ans,2*min(c1,c2));
            //cout<<c1<<" "<<c2<<endl;
            c1=1;
        }
    }


    cout<<ans;
}
