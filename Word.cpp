#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countUpper=0, countLower=0;
    for (int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            countUpper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            countLower++;
        }
    }
    if(countUpper>countLower){
         for(int i=0; i<s.length(); i++){
           if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
          }
          cout<<s[i];
        }
    }
    else{
         for(int i=0; i<s.length(); i++){
           if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
          }
          cout<<s[i];
        }
    }
}
