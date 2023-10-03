#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>m;
        vector<int> v;
        int arr[n];
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr[i]=a;
            m[a]++;
        }
        for(unordered_map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
            if(it->second<2){
                v.push_back(it->first);
            }
        }
        if(v.size()==0){
            cout<<"-1\n";
        }
        else{
            int l=v.size(),min=v[0],index=0;
            for(int i=0; i<l; i++){
                if(v[i]<min){
                    min=v[i];
                }
            }
            for(int i=0;i<n; i++){
                if(arr[i]==min){
                    i++;
                    cout<<i<<"\n";
                    break;
                }
            }
        }

    }
}
