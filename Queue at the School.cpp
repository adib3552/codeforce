#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string queue;
    cin>>queue;
    char temp;
    for(int i=0; i<t; i++){
        for(int j=0; j<n-1; j++){
            if(queue[j]<queue[j+1]){
               temp=queue[j];
               queue[j]=queue[j+1];
               queue[j+1]=temp;
               j++;
            }
        }
    }
    cout<<queue<<endl;
}
