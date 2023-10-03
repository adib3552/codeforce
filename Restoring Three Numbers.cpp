#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[4],a,b,c;
    stack<int> st;
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0; i<4; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<4; i++){
        if(arr[i]!=max){
            st.push(arr[i]);
        }
    }
    a=max-st.top();
    st.pop();
    b=max-st.top();
    st.pop();
    c=max-st.top();
    cout<<a<<" "<<b<<" "<<c;
}
