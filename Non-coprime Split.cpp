#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isPrime(long long int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int l,r,temp,temp2;
        cin>>l>>r;
        if(l==r && r%2!=0){
            if(isPrime(r)){
                cout<<"-1\n";
            }
            else if(r==1){
                cout<<"-1\n";
            }
            else{
                temp=r/2;
                temp2=temp+1;
                while(gcd(temp,temp2)==1){
                    temp++;
                    temp2--;
                }
                cout<<temp<<" "<<temp2<<"\n";
            }
        }
        else{

            if(r%2!=0){
                r--;
            }
            if(r==2 || l>r){
                cout<<"-1\n";
            }
            else{
               temp=r/2;
               cout<<temp<<" "<<temp<<"\n";
            }
        }
    }
}

