#include <bits/stdc++.h>
using namespace std;
// long long int  bella_chao(int D,int d,int P,int Q){
//     int i=1;
//     long long int sum=0;
//     int initial_sum = P*d;
//     int days_left = (D-d) / d;
//     for (i=1;i<=days_left;i++){
//         sum += (P + i*Q)*d;
//     }
//     int mod_days = D%d; 
    
//     if((mod_days) != 0)
//         sum = sum + mod_days *(P + i*Q);

//     sum = sum + initial_sum;
//     return sum;
// }

long long int bella_chao(int D,int d,int P,int Q){
int N = D/d;
long long int sum = N*d*(P + ((N - 1) *Q /2));
if(D % d != 0){
    sum = sum +  ((P + N * Q) *( D%d));
}
return sum;

}


int main(){
int test;
cin>>test;
int i,D,d,P,Q;
// long long int result;
while(test--){
    cin>>D>>d>>P>>Q;
    cout<<bella_chao(D,d,P,Q)<<endl;

}

return 0;
}