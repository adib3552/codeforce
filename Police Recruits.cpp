#include<iostream>
#include<stack>
using namespace std;
//1 -1 1 -1 2 -1 -1
int main(){
    int n,num,untreated;
    cin>>n;
    stack<int> st;
    for(int i=0; i<n; i++){
        cin>>num;
        if(st.empty() && num==-1){
            untreated++;
        }
        else if(num!=-1){
            st.push(num);
        }
        else if(num==-1){
            st.top()+=num;
            if(st.top()==0){
                st.pop();
            }
        }
    }
    cout<<untreated;
}
