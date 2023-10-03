#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%5==0){
        cout<<(x/5)<<endl;
    }
    else{
    double steps=x/5;
    int result=(int)steps+1;
    cout<<result;
    }
}
