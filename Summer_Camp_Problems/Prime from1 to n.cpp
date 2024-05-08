/*Description
Given a number N. Print all prime numbers between 1 and N inclusive.
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.In other words : prime number divisible only by 1 and itself.
Be careful that 1 is not prime.
The first few prime numbers are 2,3,5,7,11...

Input Format
Only one line containing a number 𝑁

Output Format
Print all prime numbers between 1 and N (inclusive) separated by a space.

Constraints
2≤N≤10^3

 

Sample Input 1
10
Sample Output 1
2 3 5 7*/


Solution :
#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
int prime(int n){
   for(int i=2;i<n;i++){
      if(n%i==0){
          return 0;
      }
   }
   return 1;
}
void solve() {
   int n;
   cin>>n;
   for(int i=2;i<=n;i++){
      if(prime(i)){
         cout<<i<<" ";
      }
   }  
   cout<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test;
   // cin>>test;
    //while(test--){
    solve();
   // }
return 0;
}


