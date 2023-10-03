#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
   int t;
   cin>>t;
   while(t--){
      long long int n,i=2,temp;
      cin>>n;
      vector<long long int>v;
      v.push_back(1);
      map<long long int,int>m;
      while(v.size()!=n){
        temp=i*2;
        if(m[i]!=1){
            v.push_back(i);
            m[i]=1;
        }
        while(temp<=n &&m[temp]!=1){
            m[temp]=1;
            v.push_back(temp);
            temp=temp*2;
        }
        i++;
      }
      for(long long int element:v){
        cout<<element<<" ";
      }
      cout<<"\n";
   }
}
