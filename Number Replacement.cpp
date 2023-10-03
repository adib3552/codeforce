#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,size;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        char a[size];
        int count=0;
        for(int j=0; j<size; j++){
            cin>>a[j];
        }
        string s;
        cin>>s;
        for(int k=0; k<size; k++){
            for(int l=0; l<size; l++){
                if(a[k]==a[l]){
                    a[l]=s[count];
                    count++;
                }
            }
            if(s==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

}
