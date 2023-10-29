#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            m[x]+=1;
        }
        if(m.size()<=2){
            int arr[2],c=0;
            arr[0]=0;arr[1]=0;
            for(auto e:m){
                arr[c]=e.second;
                c++;
            }
            int h=max(arr[0],arr[1]),temp=h-1;
            if(arr[0]==temp ||arr[1]==temp || m.size()==1 || n==2 || arr[0]==arr[1]){
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
