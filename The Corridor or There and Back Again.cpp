#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m;
        map<int,bool>m2;
        while(n--){
            int d,s;
            cin>>d>>s;
            if(m[d]!=0){
                //cout<<"1"<<endl;
               if(m[d]>=s){
                //cout<<"3"<<endl;
                m[d]=s;
               }
            }
            else{
                //cout<<"2"<<endl;
                m[d]=s;
            }
            m2[d]=true;
        }
        for(auto e:m){
            //cout<<e.first<<" "<<e.second<<endl;
            if(m[e.first]%2==0){
                int temp=m[e.first];
                m[e.first]=((temp/2)-1);
            }
            else{
               int temp=m[e.first];
               m[e.first]=(temp/2);
            }
        }
        int f,ind,temp1,c,temp2=0;
        for(auto e:m){
            ind=e.first;
            f=e.second;
            break;
        }
        temp1=f;
        c=ind;
        while(temp1>0){
            temp2++;
            c++;
            temp1--;
            if(!m2[c]){
                continue;
            }
            if(m[c]<temp1){
                temp1=m[c];
            }
                //cout<<temp1<<endl;

        }
        cout<<c<<"\n";
    }
}
