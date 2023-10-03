#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        bool flag=false;
        cin>>x;
        if(x>=0 && x<=9){
            cout<<x<<"\n";
        }
        else if(x>=10 && x<=17){
            for(int i=1; i<9; i++){
                if((i+9)==x){
                    cout<<i<<"9"<<"\n";
                    break;
                }
            }
        }
        else if(x>=18 && x<=24){
            for(int i=1; i<8; i++){
                if((i+8+9)==x){
                    cout<<i<<"89"<<"\n";
                    break;
                }
            }
        }
        else if(x>=25 && x<=30){
            for(int i=1; i<7; i++){
                if((i+7+8+9)==x){
                    cout<<i<<"789"<<"\n";
                    break;
                }
            }
        }
        else if(x>=31 && x<=35){
            for(int i=1; i<6; i++){
                if((i+6+7+8+9)==x){
                    cout<<i<<"6789"<<"\n";
                    break;
                }
            }
        }
        else if(x>=36 && x<=39){
            for(int i=1; i<5; i++){
                if((i+5+6+7+8+9)==x){
                    cout<<i<<"56789"<<"\n";
                    break;
                }
            }
        }
        else if(x>=40 && x<=42){
            for(int i=1; i<4; i++){
                if((i+4+5+6+7+8+9)==x){
                    cout<<i<<"456789"<<"\n";
                    break;
                }
            }
        }
        else if(x>=43 && x<=44){
            for(int i=1; i<3; i++){
                if((i+3+4+5+6+7+8+9)==x){
                    cout<<i<<"3456789"<<"\n";
                    break;
                }
            }
        }
        else if(x==45){
            cout<<"123456789\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}
