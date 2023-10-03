#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,nb=0,nc=0,cb=0,cc=0;
        cin>>n;
        long long int arr[n],b[n],c[n];
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                b[cb]=arr[i];
                nb++;
                cb++;
            }
            else{
                c[cc]=arr[i];
                nc++;
                cc++;
            }
            m[arr[i]]+=1;
        }
        if(m[arr[0]]==n){
            cout<<"-1\n";
        }
        else if(nc==0){
            long long int max=b[0];
            for(int i=0; i<nb; i++){
                if(b[i]>max){
                    max=b[i];
                }
            }
            int s=n-m[max];
            cout<<s<<" "<<m[max]<<"\n";
            for(int i=0; i<nb; i++){
                if(b[i]!=max){
                    cout<<b[i]<<" ";
                }
            }
            cout<<"\n";
            for(int i=0; i<m[max]; i++){
                cout<<max<<" ";
            }
            cout<<"\n";
        }
        else if(nb==0){
            long long int max=c[0];
            for(int i=0; i<nc; i++){
                if(c[i]>max){
                    max=c[i];
                }
            }
            int s=n-m[max];
            cout<<s<<" "<<m[max]<<"\n";
            for(int i=0; i<nc; i++){
                if(c[i]!=max){
                    cout<<c[i]<<" ";
                }
            }
            cout<<"\n";
            for(int i=0; i<m[max]; i++){
                cout<<max<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<nc<<" "<<nb<<"\n";
            for(int i=0; i<nc; i++){
                cout<<c[i]<<" ";
            }
            cout<<"\n";
            for(int i=0; i<nb; i++){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
