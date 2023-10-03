#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x,l,diff;
        cin>>n>>k;
        multiset<long long int>s;
        set<int>minSet;
        int c=1,big,ans;
        vector<long long int>v;
        for(int i=0; i<n; i++){
          cin>>x;
          s.insert(x);
        }
        if(n==1){
            cout<<"0\n";
        }
        else{
            for(long long int element:s){
                v.push_back(element);
            }
            l=v.size();
            for(int i=0; i<l-1; i++){
                diff=sqrt(pow((v[i]-v[i+1]),2));
                if(diff<=k){
                    c++;
                }
                else{
                    //c++;
                    //cout<<c<<endl;
                    minSet.insert(c);
                    c=1;
                }
            }
            if(c!=1){
                minSet.insert(c);
            }
            if(minSet.size()==0){
                big=n;
            }
            else{
                for(auto it=minSet.rbegin(); it!=minSet.rend(); it++){
                    big=(*it);
                    break;
                }
            }

            ans=n-big;
            cout<<ans<<"\n";
            }
    }
}
