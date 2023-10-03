#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5],sum=0;
    for(int i=1; i<5; i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0; i<l; i++){
        int a=s[i]-'0';
        sum+=arr[a];
    }
    cout<<sum;
}
