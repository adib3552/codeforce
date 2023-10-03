#include<iostream>
#include<map>
using namespace std;
int main(){
   string s1,s2,s3;
   cin>>s1>>s2>>s3;
   map<char,int> m;
   map<char,int> n;
   int total=s1.length()+s2.length(),l1=s1.length(),l2=s2.length(),l3;
   l3=s3.length();
   for(int i=0; i<l1; i++){
        m[s1[i]]+=1;
   }
   for(int i=0; i<l2; i++){
        m[s2[i]]+=1;
   }
   for(int i=0; i<l3; i++){
        n[s3[i]]+=1;
   }
   if(m.size()!=n.size()){
        cout<<"NO";
        return 0;
   }
   for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second!=n[it->first]){
            cout<<"NO\n";
            return 0;
        }
   }
   cout<<"YES";

}
