#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        map<char,int> m;
        int l,k,burl=0,sum=0,temp2=0,a=0;
        cin>>l>>k;
        cin>>s;
        for(int i=0; i<l; i++){
            m[s[i]]+=1;
        }
        for(map<char,int>::iterator itr=m.begin(); itr!=m.end(); itr++){
            char c=itr->first;
            int temp=0;
            if(isupper(c) && m[c]!=0 && m[c+32]!=0){
                if(m[c]>m[c+32]){
                 temp=m[c+32];
                 burl=burl+temp;
                 m[c]=m[c]-m[c+32];
                 m[c+32]=0;
               }
               else{
                 temp=m[c];
                 burl=burl+temp;
                 m[c+32]=m[c+32]-m[c];
                 m[c]=0;
               }
            }
            else if(islower(c) && m[c]!=0 && m[c-32]!=0){
               if(m[c]>=m[c-32]){
                 temp=m[c-32];
                 burl=burl+temp;
                 m[c]=m[c]-m[c-32];
                 m[c-32]=0;
               }
               else{
                 temp=m[c];
                 burl=burl+temp;
                 m[c-32]=m[c-32]-m[c];
                 m[c]=0;
               }
            }
        }
        for(map<char,int>::iterator itr=m.begin(); itr!=m.end(); itr++){
            char c=itr->first;
            int temp=0;
            if(m[c]>1 && k>0){
                temp=m[c];
                if(temp%2!=0){
                    temp--;
                }
                sum=sum+temp;
            }
        }
        temp2=sum/2;
        if(temp2<=k){
            burl=burl+temp2;
        }
        else{
            burl=burl+k;
        }
        cout<<burl<<"\n";
    }
}
