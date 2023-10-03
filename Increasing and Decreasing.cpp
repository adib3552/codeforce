#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n,c=1,fi,se,l,i=0;
        cin>>x>>y>>n;
        vector<int>v;
        bool f=false;
        set<int>s;
        s.insert(y);
        for(int i=0; i<n-2; i++){
            y=y-c;
            if(y>x){
                s.insert(y);
                c++;
            }
            else{
                break;
            }
        }
        s.insert(x);
        for(int element:s){
            if(i==0){
              fi=element;
              i++;
            }
            else if(i==1){
                se=element;
                i++;
            }
            v.push_back(element);
        }
        int diff=se-fi;
        //cout<<diff<<endl;
        l=v.size();
        for(int i=1; i<l-1; i++){
            int temp=v[i+1]-v[i];
            //cout<<temp<<endl;
            if(diff>temp){
                f=true;
            }
            else{
                f=false;
                break;
            }
        }
        if(f && s.size()==n){
            for(int element:s){
               cout<<element<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}
