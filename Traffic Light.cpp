#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,g=0;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0; i<n; i++){
           m[s[i]]++;
        }
        g=m[c];
        s+=s;
        int hi=n+n,lo=0,mid=0,ans=0;
        while(hi-lo>1){
            mid=(hi+lo)/2;
            bool visited[n]={false};
            int temp=0;
            for(int i=0; i<n; i++){
                if(s[i]==c){
                    visited[i]=true;

                    int a=0,b=0;
                    while(b<=mid){
                        if(s[i]==c && !visited[i%n]){
                            a++;
                            visited[i]=true;
                        }
                        if(s[i]=='g'){
                            temp++;
                            temp+=a;
                            break;
                        }
                        b++;
                        i++;
                    }

                }
            }

            if(temp==g){
                ans=mid;
                hi=mid;
            }
            else{
                lo=mid;
            }
             //cout<<mid<<" "<<temp<<endl;
        }
        if(c=='g'){
            ans=0;
        }
        cout<<ans<<"\n";
    }
}
