#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool match=false;
        string s;
        int l;
        cin>>l;
        cin>>s;
        int i=0,j=0,c=0;
        while(l--)
        {
            switch(s[c])
            {
            case'U':
                i++;
                break;
            case'D':i--;break;
                case'R':
                j++;
                break;
            case'L':
                j--;
                break;
            }
            if(i==1 && j==1)
            {
                match=true;
                break;
            }
            else
            {
                match=false;
            }
            c++;
        }
        if(match)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
