#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s1="I hate",s2="I love",s3;
    if(num==1){
        s3+=s1;
    }
    else{
        for(int i=1; i<=num; i++){
            if(i==1){
                s3+=s1;
            }
            else if(i%2!=0){
                s3=s3+" that "+s1;
            }
            else{
                s3=s3+" that "+s2;
            }
        }
    }
    s3+=" it";
    cout<<s3<<endl;
}
