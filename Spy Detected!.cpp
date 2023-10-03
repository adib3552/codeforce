#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,index,s;
        cin>>n;
        int arr[n];
        map<int, int> m;
        for (int i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]+=1;
        }
        for(map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
            if(it->second==1){
                s=it->first;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]==s){
                index=i;
                break;
            }
        }
        index++;
        cout<<index<<"\n";

    }
}
