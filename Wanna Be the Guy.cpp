#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        m[num]+=1;
    }
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        m[num]+=1;
    }
    for(int i=1; i<=n; i++){
        if(m[i]==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;

}
