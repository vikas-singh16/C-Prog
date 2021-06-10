#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll power(ll x,int y,ll mod){
    ll res = 1;
    x = x % mod;
    while(y>0){
        if( y&1)
            res = (res * x)%mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}

int main(){
    int test;
    int N,M;
    cin>>test;
    while(test--){
        ll mod = 100000007;
        ll exp = (int)(pow(2,N) + 0.5) ;
        cout<<power(exp-1,M,mod)<<endl;
    }

return 0;
}