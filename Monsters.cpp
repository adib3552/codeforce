#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,temp=0;
        cin>>n>>k;
        long long int arr[n];
        multiset<pair<long long int,int>>s;
        multiset<int>s2;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%k==0){
                temp=i+1;
                cout<<temp<<" ";
            }
            else{
                temp=i+1;
                int mod;
                if(arr[i]>k){
                    mod=arr[i]%k;
                    arr[i]=mod;
                }
                s.insert({arr[i],temp});
            }
        }
        int prev;
        stack<int>st;
        for(multiset<pair<long long int,int>>::reverse_iterator it=s.rbegin(); it!=s.rend(); it++){
           prev=it->first;
           break;
        }
        for(multiset<pair<long long int,int>>::reverse_iterator it=s.rbegin(); it!=s.rend(); it++){
            if(it->first==prev){
                st.push(it->second);
            }
            else{
                while(!st.empty()){
                    cout<<st.top()<<" ";
                    st.pop();
                }
                st.push(it->second);
            }
            prev=it->first;
            //cout<<"{"<<it->first<<","<<it->second<<"}"<<endl;
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<"\n";
    }
}
