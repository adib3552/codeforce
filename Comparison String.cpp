#include<Bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,c=1000,max=c,min=c,ans;
        cin>>n;
        string s;
        cin>>s;
        set<int>m;
        set<char>m2;
        l=s.length();
        m.insert(c);
        //cout<<c<<" ";
        for(int i=0; i<l; i++){
            m2.insert(s[i]);
            if(s[i]=='<'){
                c++;
                m.insert(c);
            }
            else if(s[i]=='>'){
                c--;
                m.insert(c);
            }
            if(c>max){
                max=c;
            }
            if(c<min){
                min=c;
            }
            if(s[i]=='>' && s[i+1]=='<' && i<l){
                c=min;
            }
            else if(s[i]=='<' && s[i+1]=='>' && i<l){
                c=max;
            }
            //cout<<c<<" ";
        }
        //cout<<endl;
        m2.insert(s[l-1]);
        if(m2.size()>1){
            ans=m.size();
        }
        else{
            ans=n+1;
        }
        cout<<ans<<"\n";

    }
}
