#include<bits/stdc++.h>
using namespace std;
const int N=10000;
vector<int>graph[N];
void dfs(int vertex, int&y){
    for(auto child:graph[vertex]){
        if(graph[child].size()<=1){
            y++;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int v,e,tempy,c=0,x=0,y;
        cin>>v>>e;
        set<int>s;
        for(int i=0; i<e; i++){
            int x,y;
            cin>>x>>y;
            s.insert(x);
            s.insert(y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for(auto e:s){
            tempy=0;
            if(e>1){
               dfs(e,tempy);
            }
            if(tempy!=0){
              y=tempy;
              c++;
            }
        }
        x=e/(y+1);
        cout<<x<<" "<<y<<"\n";
        for(int i=0; i<N; i++){
            graph[i].clear();
        }
    }
}
