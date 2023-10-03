#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,pl;
    string s,p="3141592653589793238462643383279502884";
    cin>>t;
    pl=p.length();
    for(int i=0; i<t; i++){
        cin>>s;
        int count=0,k=0,l=s.length();
        for(int j=0; j<l; j++){
            if(p[j]==s[j]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<"\n";
    }
}
