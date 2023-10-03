#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l[k],r[k];
        for(int i=0; i<k; i++){
            cin>>l[i];
        }
        for(int i=0; i<k; i++){
            cin>>r[i];
        }
        int q;
        cin>>q;
        int qu[q];
        multimap<int,int>m;
        for(int i=0; i<q; i++){
            cin>>qu[i];
        }
        bool visa[n][n]={false};
        for(int i=0; i<k; i++){
            for(int j=0; j<q; j++){
                if(qu[j]>=l[i] && qu[j]<=r[i]){
                    m.emplace(i,qu[i]);
                    int a=min(qu[j],(l[i]+r[i]-qu[j]));
                    int b=max(qu[j],(l[i]+r[i]-qu[j]));
                    a--;
                    b--;
                    cout<<a<<" "<<b<<endl;
                    if(!visa[a][b]){
                        char temp=s[a];
                        s[a]=s[b];
                        s[b]=temp;
                    }
                    cout<<s<<endl;
                    visa[a][b]=true;
                }
            }
        }
        cout<<s<<"\n";
    }
}
