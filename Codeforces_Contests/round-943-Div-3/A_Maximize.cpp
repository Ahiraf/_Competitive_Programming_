Problem Url :https://codeforces.com/contest/1968/problem/A
#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
int gcd(int n,int m){
  while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t;
    cin>>t;
    while(t--){
   int x;
   cin>>x;
   for(int i=1;i<x;i++){
   int a= gcd(x,i);
    if(a+i==x){
        cout<<i<<nn;
         break;
         }
 
   }
 
   }
 
    return 0;
}
