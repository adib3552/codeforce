#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,min,max,min2,max2,min1,max1;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    min=sqrt(pow((arr[0]-arr[1]),2));
    max=sqrt(pow((arr[n-1]-arr[0]),2));
    cout<<min<<" "<<max<<"\n";

    if(n>2){
        for(int i=1; i<n-1; i++){
            max1=sqrt(pow((arr[n-1]-arr[i]),2));
            min1=sqrt(pow((arr[i]-arr[i-1]),2));
            min2=sqrt(pow((arr[i+1]-arr[i]),2));
            max2=sqrt(pow((arr[0]-arr[i]),2));

            if(min1<min2){
                min=min1;
            }
            else{
                min=min2;
            }
            if(max1>max2){
                max=max1;
            }
            else{
                max=max2;
            }

            cout<<min<<" "<<max<<"\n";
        }
    }
         min=sqrt(pow((arr[n-1]-arr[n-2]),2));
         max=sqrt(pow((arr[0]-arr[n-1]),2));
         cout<<min<<" "<<max<<"\n";
}
