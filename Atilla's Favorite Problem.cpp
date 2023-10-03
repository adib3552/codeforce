<<<<<<< HEAD
#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    map<char,int> m;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++){
        m[alphabet[i]]=c;
        c++;
    }
    for(int i=0; i<t; i++){
        int l;
        string s;
        cin>>l;
        cin>>s;
        char max=s[0];
        for(int j=0; j<l; j++){
           if(s[j]>max){
                max=s[j];
           }
        }
        cout<<m[max]<<"\n";
    }

}
=======
#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,c=1;
    cin>>t;
    map<char,int> m;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++){
        m[alphabet[i]]=c;
        c++;
    }
    for(int i=0; i<t; i++){
        int l;
        string s;
        cin>>l;
        cin>>s;
        char max=s[0];
        for(int j=0; j<l; j++){
           if(s[j]>max){
                max=s[j];
           }
        }
        cout<<m[max]<<"\n";
    }

}
>>>>>>> 8ae16da (sent)
