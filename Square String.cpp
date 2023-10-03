#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        bool flag=false;
        cin>>s;
        int l=s.length(),c;
        if(l%2==0){
            char arr[l/2],arr2[l/2];
            for(int i=0; i<l/2; i++){
                arr[i]=s[i];
            }
            c=l/2;
            for(int i=0; i<l/2; i++){
                arr2[i]=s[c];
                c++;
            }
            for(int i=0; i<l/2; i++){
                if(arr[i]!=arr2[i]){
                    flag=false;
                    break;
                }
                else{
                    flag=true;
                }
            }
        }
        else{
            flag=false;
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
