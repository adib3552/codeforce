#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    string s;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>s;
    if(s=="X++" || s=="++X"){
            x++;
    }
    if(s=="X--" || s=="--X"){
            x--;
    }
    }
    cout<<x<<endl;
}
