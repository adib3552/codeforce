#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int sum=0;
        int n,c=0;
        cin>>n;
        multiset<long long int>minSet,sminSet;
        for(int i=0; i<n; i++){
            multiset<long long int>s;
            int m;
            cin>>m;
            while(m--){
                long long int x;
                cin>>x;
                s.insert(x);
            }
            for(auto element:s){
               if(c<2){
                minSet.insert(element);
               }
               else{
                break;
               }
               if(c==1){
                sminSet.insert(element);
               }
               c++;
            }

            c=0;
        }
//        for(auto element:sminSet){
//            cout<<element<<" ";
//        }
//        cout<<endl;
        for(auto element:minSet){
            sum+=element;
            break;
        }
        n--;
        for(auto it=sminSet.rbegin(); it!=sminSet.rend(); it++){
            if(n>0){
                sum=sum+(*it);
            }
            else{
                break;
            }
            n--;
        }
        cout<<sum<<"\n";
    }
}
