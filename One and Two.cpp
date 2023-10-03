#include<iostream>
#include<queue>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=1;
        cin>>n;
        int a[n];
        queue<int> q;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        while(k<n){
            int mult1=1,mult2=1;
            for(int i=0; i<=k-1; i++){
                mult1*=a[i];
            }
            for(int i=k; i<n; i++){
                mult2*=a[i];
            }
            if(mult1==mult2){
                q.push(k);
            }
            k++;
        }
        if(!q.empty()){
            cout<<q.front()<<"\n";
            while(!q.empty()){
                q.pop();
            }
        }
        else{
           cout<<"-1"<<"\n";
        }
    }
}
