Problem Url : https://www.codechef.com/problems/POWPM?tab=statement

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
void solve() {
   int n;
   ll sum=0;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==1){
      sum+=n;
      }
   }
   for(int i=0;i<n;i++){
       if(arr[i] ==1){
            continue;
            }
        for(int  j=0;j<min(n,30);j++){
             ll m=pow(arr[i],(j+1));
             if(m>Max)break;
             if( m<=arr[j]){
               sum++;
            }  
       }
   } 
   cout<<sum<<nn;  
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
     cin>>test;
    while(test--){
    solve();
   }
return 0;
}








