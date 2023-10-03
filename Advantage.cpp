<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int s;
        cin>>s;
        int arr[s],arr2[s];
        for(int j=0; j<s; j++){
            cin>>arr[j];
            arr2[j]=arr[j];
        }
        sort(arr,arr+s);
        int max=arr[s-1],max2=arr[s-2];
        for(int j=0; j<s; j++){
            if(arr2[j]==max){
                arr2[j]-=max2;
            }
            else{
                arr2[j]-=max;
            }
        }
        for(int j=0; j<s; j++){
            cout<<arr2[j]<<" ";
        }
        cout<<"\n";
    }
}
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int s;
        cin>>s;
        int arr[s],arr2[s];
        for(int j=0; j<s; j++){
            cin>>arr[j];
            arr2[j]=arr[j];
        }
        sort(arr,arr+s);
        int max=arr[s-1],max2=arr[s-2];
        for(int j=0; j<s; j++){
            if(arr2[j]==max){
                arr2[j]-=max2;
            }
            else{
                arr2[j]-=max;
            }
        }
        for(int j=0; j<s; j++){
            cout<<arr2[j]<<" ";
        }
        cout<<"\n";
    }
}
>>>>>>> 8ae16da (sent)
