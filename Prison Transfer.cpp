#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,c,count=0,total=0,temp;
    cin>>n>>t>>c;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
       if(arr[i]<=t){
        //cout<<"IN\n";
        count++;
       }
       else{
        temp=(count-c)+1;
        count=0;

       }
       if(temp>0){
        total+=temp;
        temp=0;
       }
    }

    temp=(count-c)+1;
    if(temp>0){
      total+=temp;
    }
    cout<<total;

}
