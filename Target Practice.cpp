#include<bits/stdc++.h>
/*

*/
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c[10][10];
        map<int,int>m;
        int sum=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>c[i][j];
                if(c[i][j]=='X'){
                    int a=i,b=j;
                    a++;
                    b++;
                    if(a==1 || a==10 ||b==1 || b==10){

                        m[1]+=1;
                    }
                    else if(a==2 || a==9 || b==2 || b==9){
                        m[2]+=1;
                    }
                    else if(a==3 || a==8 || b==3 || b==8){
                        m[3]+=1;
                    }
                    else if(a==4 || a==7 || b==4 || b==7){
                        m[4]+=1;
                    }
                    else if(a==5 || a==6 || b==5 || b==6){
                        m[5]+=1;
                    }
                }
            }
        }
        for(auto e:m){
           int x=e.first*e.second;
           sum+=x;
        }
        cout<<sum<<"\n";
    }
}

