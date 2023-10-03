#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s;
        s2=s;
        bool f=false;
        long long int l=s.length(),temp2;
        if(s[0]>='5'){
            cout<<"1";
            for(int i=0; i<l; i++){
                cout<<"0";
            }
            cout<<"\n";
        }
        else{
            for(int i=l-2; i>=0; i--){
                //cout<<s[i]<<endl;
                if(s[i]=='9'){
                    int temp;
                    s[i]='0';
                    for(int j=i-1; j>=0; j--){
                       if(s[j]!='9'){
                        s[j]++;
                        temp=j;
                        break;
                       }
                    }
                    temp2=temp;
                    i=temp2;
                }
                else if(s[i+1]>='5'){
                    //cout<<"in";
                    s[i]++;
                    temp2=i;
                    //i=l-2;
                }
            }
            if(s[0]>='5'){
                cout<<"1";
                for(int i=0; i<l; i++){
                    cout<<"0";
                }
                cout<<"\n";
            }
            else if(s==s2){
                cout<<s<<"\n";
            }
            else{
                for(int i=0; i<=temp2; i++){
                    cout<<s[i];
                }
                for(int i=temp2+1; i<l; i++){
                    cout<<"0";
                }
                cout<<"\n";
            }
        }
    }
}
