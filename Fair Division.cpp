#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,sum1=0,sum2=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1){
                sum1+=1;
            }
            else{
                sum2+=2;
            }
        }
        if(sum%2!=0){
            cout<<"NO\n";
        }
        else{
            if(sum2==0){
                cout<<"YES\n";
            }
            else if(sum1==0){
                if(n%2==0){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                int mid=sum/2;
                //cout<<mid<<endl;
                bool flag=false;
                while(sum1!=0 && sum2!=0){
                    if((sum1+sum2)==mid){
                        cout<<"YES\n";
                        flag=true;
                        break;
                    }
                    else{
                        if(sum2>sum1){
                            sum1--;
                            sum2-=2;
                        }
                        else{
                            sum1-=mid;
                        }
                    }
                    cout<<sum1<< " "<<sum2<<endl;
                }
                if(!flag){
                    cout<<"NO\n";
                }
            }
        }

    }
}
