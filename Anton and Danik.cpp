<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n,countA=0,countD=0;
    cin>>n;
    string match;
    cin>>match;
    for(int i=0; i<match.length(); i++){
        if(match[i]=='A'){
            countA++;
        }
        else if(match[i]=='D'){
            countD++;
        }
    }
    if(countA>countD){
        cout<<"Anton"<<endl;
    }
    else if(countD>countA){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}
=======
#include<iostream>
using namespace std;
int main(){
    int n,countA=0,countD=0;
    cin>>n;
    string match;
    cin>>match;
    for(int i=0; i<match.length(); i++){
        if(match[i]=='A'){
            countA++;
        }
        else if(match[i]=='D'){
            countD++;
        }
    }
    if(countA>countD){
        cout<<"Anton"<<endl;
    }
    else if(countD>countA){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}
>>>>>>> 8ae16da (sent)
