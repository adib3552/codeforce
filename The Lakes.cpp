#include<bits/stdc++.h>
using namespace std;

void dfs(int n, int m, int (*arr)[10000], bool visited[][10000], long long int&sum,int i,int j){
    if(i<0 || j<0 || i>=n || j>=m){
        return;
    }
    if(arr[i][j]<=0){
        return;
    }
    if(visited[i][j]){
        return;
    }
    visited[i][j]=true;
    sum+=arr[i][j];

    dfs(n,m,arr,visited,sum,i-1,j);
    dfs(n,m,arr,visited,sum,i+1,j);
    dfs(n,m,arr,visited,sum,i,j+1);
    dfs(n,m,arr,visited,sum,i,j-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        long long int a;
        cin>>n>>m;
        int arr[n][10000];
        bool arr2[n][10000]={false};
        set<long long int>s;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               long long int sum=0;
               if(arr[i][j]!=0 && !arr2[i][j]){
                dfs(n,m,arr,arr2,sum,i,j);

               }
               s.insert(sum);
            }
        }
        for(set<long long int>::reverse_iterator it=s.rbegin(); it!=s.rend(); it++){
            a=(*it);
            break;
        }
        cout<<a<<"\n";


    }
}
