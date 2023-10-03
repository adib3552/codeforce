#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int temp=0;
    for (int i=0; i<s.size(); i++){
       for (int j=i+2; j<s.size(); j++){
            if(s[i]>=s[j]){
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
            }
            j++;
      }
    }
    cout<<s;
}
