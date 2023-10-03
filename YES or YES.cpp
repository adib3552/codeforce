#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0; i<3; i++)
        {
            if(isupper(s[i]))
            {
                s[i]+=32;
            }
        }
        if(s=="yes")
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
