#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        map<string,int>m;
        cin>>n;
        string s;
        cin>>s;
        int l=s.length();
        for(int i=0; i<l-2; i++){
           string s2="abc";
           s2[0]=s[i];
           s2[1]=s[i+1];
           s2[2]=s[i+2];
           string s3="ab";
           s3[0]=s2[0];
           s3[1]=s2[1];
           m[s3]+=1;
           s3[0]=s2[1];
           s3[1]=s2[2];
           m[s3]+=1;
        }
        if(m.size()==0){
            cout<<"1\n";
        }
        else{
            cout<<m.size()<<"\n";
        }

    }
}

