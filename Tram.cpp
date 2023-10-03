#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,exit=0,max=0,sum=0;
    cin>>n;
    int arr[n];
    int x,y;
    cin>>x>>y;
    sum=x+y;
    arr[0]=sum;
    for(int i=1; i<n; i++)
    {
        cin>>x>>y;
        sum-=x;
        sum+=y;
        arr[i]=sum;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
