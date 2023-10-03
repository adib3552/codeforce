#include<iostream>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    bool hard=false;
    for(int i=0; i<n; i++){
        cin>>num;
        if(num==1){
            hard=true;
        }
    }
    if(hard){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}
