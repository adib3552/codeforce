#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> v;
        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            arr[i]=b;
            if(a<=10){
                v.push_back(b);
            }
        }
        int max=v[0];
            for(int i=0; i<v.size(); i++){
               if(v[i]>max){
                max=v[i];
               }
            }
            for(int i=0; i<n; i++){
                if(arr[i]==max){
                    i++;
                    cout<<i<<"\n";
                    break;
                }
            }
    }
}
