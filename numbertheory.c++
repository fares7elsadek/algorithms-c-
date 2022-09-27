#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5, INF = 1e9 + 5, mod = 1e9 + 7;
 
int add(int a, int b){
   a = (0LL + a + mod) % mod;
   b = (0LL + b + mod) % mod;
   return (a + b) % mod;
}
int mul(int a, int b){
   a %= mod;
   b %= mod;
   return (1LL * a * b) % mod;
}
int fastPow(int base, int power){
   if(base == 1 or power == 0)
       return 1;
    int halfPower = fastPow(base, power / 2);
   int ans = mul(halfPower, halfPower);
 
   if(power % 2 == 1)
       ans = mul(ans, base);
 
   return ans;
}
 
int modInverse(int x){
   return fastPow(x, mod - 2);
}

int fac[N];
 
void pre(){
   fac[0] = 1;
 
   for(int i = 1; i < N; i++)
       fac[i] = mul(fac[i - 1], i);
}
 
int nPr(int n, int r){
   return mul(fac[n], modInverse(fac[n - r]));
}
 
int nCr(int n, int r){
   return mul(fac[n], modInverse(mul(fac[n - r], fac[r])));
}
 
int starsAndBars(int stars, int bars){
   return nCr(stars + bars, bars);
}
int main(){
}
