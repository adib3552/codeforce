#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s2,s3;
        cin>>s;
        int l=s.length(),l2=2*l;
        bool f=false,f2=false;
        for(int i=0; i<l; i++){
            s2+="()";
        }
        for(int i=0; i<l2; i++){
            if((i+1)<=(l2/2)){
                s3+="(";
            }
            else{
               s3+=")";
            }
        }
        for(int i=0; i<l; i++){
            string temp=s;
            int c=i;
            for(int j=0; j<l; j++){
                temp[j]=s2[c];
                //cout<<s2[c]<<" ";
                c++;
            }
            //cout<<endl;
            if(temp==s){
               f=true;
               break;
            }
        }
        for(int i=0; i<l; i++){
            string temp=s;
            int c=i;
            for(int j=0; j<l; j++){
                temp[j]=s3[c];
                //cout<<s2[c]<<" ";
                c++;
            }
            //cout<<endl;
            if(temp==s){
               f2=true;
               break;
            }
            //cout<<temp<<endl;
        }
        if(!f){
            cout<<"YES\n";
            cout<<s2<<"\n";
        }
        else if(!f2){
            cout<<"YES\n";
            cout<<s3<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
