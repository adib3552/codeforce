#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,c=0,p=1;
        cin>>n;
        multiset<int>s;
        for(int i=0; i<n; i++){
           int x;
           cin>>x;
           s.insert(x);
        }
        for(int a:s){
            if(c==0){
                int b=a;
                b++;
                c++;
                p*=b;
            }
            else{
                p*=a;
            }
        }
        cout<<p<<"\n";
    }
}
