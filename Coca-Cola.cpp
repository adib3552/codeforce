#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> nPen;
        map<int,int> tScore;
        map<int,int> penTrack;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            nPen[(i+1)]=1;
            penTrack[(i+1)]+=(i+1);
            tScore[(i+1)]=arr[i];
        }
        int q;
        cin>>q;
        while(q--){
            int x;
            cin>>x;
            if(x==1){
                int a,b;
                cin>>a>>b;
                if(tScore[a]>tScore[b]){
                    penTrack[b]=a;
                    nPen[a]++;
                    tScore[a]+=tScore[b];
                    if(tScore[b]!=0){
                        tScore[b]-=tScore[b];
                    }
                    if(nPen[b]!=0){
                        nPen[b]--;
                    }
                }
                else{
                    penTrack[a]=b;
                    nPen[b]++;
                    tScore[b]+=tScore[a];
                    if(tScore[a]!=0){
                        tScore[a]-=tScore[a];
                    }
                    if(nPen[a]!=0){
                        nPen[a]--;
                    }
                }
            }
            else if(x==2){
                int b;
                cin>>b;
                cout<<nPen[b]<<"\n";
            }
            else if(x==3){
                int c;
                cin>>c;
                cout<<penTrack[c]<<"\n";
            }
        }
    }
}
