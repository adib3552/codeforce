#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>l;
        cin>>s;
        int i=0,j=l-1,c=0,count=l;
        while(i!=j && count>0){
           if(s[i]=='0' && s[j]=='1'){
                count-=2;
           }
           else if(s[i]=='1' && s[j]=='0'){
                count-=2;
           }
           else{
                break;
           }
           i++;
           j--;
        }
        cout<<count<<"\n";
    }
}
