#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int n=s[0]-'0',num=stoi(s),l=s.length(),sum=0,count=0,j=0;
        int p=l-1;
        for(int i=0; i<l; i++){
            if(s[i]!='0'){
                count++;
            }
        }
        if((n*pow(10,p))==num){
            cout<<"1\n";
            cout<<num<<"\n";
        }
        else{
                cout<<count<<"\n";
           while(sum<num){
                if(s[j]!='0'){
                    int num2=s[j]-'0',num3;
                    sum+=num2*pow(10,p);
                    num3=num2*pow(10,p);
                    cout<<num3<<" ";
                }
                p--;
                j++;
           }
           cout<<"\n";
        }
    }
}
