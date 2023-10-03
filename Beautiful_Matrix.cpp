#include<iostream>
using namespace std;
int main(){
    int count1=0,count2=0;
    int a[5][5];
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin>>a[i][j];
        }
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if(a[i][j]==1){
                if(i>2){
                    count1=i-2;
                }
                else if(i<2){
                    count1=2-i;
                }
                if(j>2){
                    count2=j-2;
                }
                else if(j<2){
                    count2=2-j;
                }
            }
        }
    }
    cout<<(count1+count2);
}
