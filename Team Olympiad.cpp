#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,team;
    map<int,int> m;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
        m[arr[i]]+=1;
    }
    if(m[1]<=m[2] && m[1]<=m[3]){
        team=m[1];
    }
    else if(m[2]<=m[1] && m[2]<=m[3]){
        team=m[2];
    }
    else if(m[3]<=m[1] && m[3]<=m[2]){
        team=m[3];
    }
    cout<<team<<"\n";
    for(int i=0; i<team; i++){
        bool flag1=false, flag2=false, flag3=false;
        for(int j=0; j<n; j++){
            if(arr[j]==1 && !flag1){
                cout<<(j+1)<<" ";
                arr[j]=0;
                j=0;
                flag1=true;
            }
            else if(arr[j]==2 && !flag2){
                cout<<(j+1)<<" ";
                arr[j]=0;
                j=0;
                flag2=true;
            }
            else if(arr[j]==3 && !flag3){
                cout<<(j+1)<<" ";
                arr[j]=0;
                j=0;
                flag3=true;
            }
        }
        cout<<"\n";
    }
}
