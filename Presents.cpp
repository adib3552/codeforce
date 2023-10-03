#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    map<int, int> m;
    for(int i=1; i<n+1; i++){
        int x;
        cin>>x;
        m[i]=x;
    }
    for(int i=1; i<n+1; i++){
        for(map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
            if(it->second==i){
                cout<<it->first<<" ";
                break;
            }
        }
    }
}
