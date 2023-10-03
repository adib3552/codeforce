#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        bool printNeg=false;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1 && arr[0]%2!=(n-1)%2){
            printNeg=true;
            n=0;
        }
        for(int i=0; i<n; i++){
             if(i==(n-1) && arr[i]%2!=(n-1)%2){
                  printNeg=true;
                  break;
            }
            if(arr[i]%2!=i%2){
                for(int j=i+1; j<n; j++){
                    if(arr[i]%2==j%2  && arr[j]%2!=j%2){
                        int temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        c++;
                        printNeg=false;
                        break;
                    }
                    else{
                        printNeg=true;
                    }

                }
            }
        }
        if(printNeg){
            cout<<"-1\n";
        }
        else{
            cout<<c<<"\n";
        }
    }
}
