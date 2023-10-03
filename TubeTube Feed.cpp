#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr1[n],arr2[n];
        bool f=false;
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        for(int i=0; i<n; i++){
            int max=arr2[0],maxin=0,r=0;
            for(int j=0; j<n; j++){
               if(arr2[j]>max){
                 max=arr2[j];
                 maxin=j;
               }
            }
            arr2[maxin]=0;
            r=arr1[maxin]+maxin;
            if(r<=q){
                maxin++;
                f=true;
                cout<<maxin<<"\n";
                break;
            }
        }
        if(!f){
            cout<<"-1\n";
        }

    }
}
