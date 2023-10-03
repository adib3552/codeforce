#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[2][2];
        int temp;
        bool yes=false;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>arr[i][j];
            }
        }
        int r[4];
        r[0]=arr[0][0];
        r[1]=arr[0][1];
        r[2]=arr[1][1];
        r[3]=arr[1][0];

        for(int i=0; i<4; i++){
            int j=i,f,s,t,l;
            f=r[j%4];
            j++;
            s=r[j%4];
            j++;
            t=r[j%4];
            j++;
            l=r[j%4];
            if(((f<s)&&(l<t))){
                if((f<l)&&(s<t)){
                    yes=true;
                    break;
                }
            }
        }
        if(yes){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
