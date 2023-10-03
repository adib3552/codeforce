#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,h,num,count=0;
    cin>>n>>h;
    for(int i=0; i<n; i++){
        cin>>num;
        v.push_back(num);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
}
