#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
int height[N];

void dfs(int vertex,int parent=0){
    for(int child:graph[vertex]){
        if(parent==child){
            continue;
        }
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
    }
}
int main(){
  int n,l,r;
  cin>>n;
  vector<int>v,v1;
  for(int i=1; i<=n; i++){
    int x;
    cin>>x;
    if(x!=-1){
        graph[i].push_back(x);
        graph[x].push_back(i);
    }
    else{
        v.push_back(i);
    }
  }
  l=v.size();
  for(int i=0; i<l; i++){
    dfs(v[i]);
    v1.push_back(height[v[i]]);
  }
  l=v1.size();
  r=v1[0];
  for(int i=0; i<l; i++){
    if(v1[i]>r){
        r=v1[i];
    }
  }
  r++;
  cout<<r;
}
