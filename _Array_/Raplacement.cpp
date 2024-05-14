Description :
Given a number N and an array A of N numbers. Print the array after doing the following operations:∙ Replace every positive number by 1∙ Replace every negative number by 2.

Input Format
The first line contains T. The number of test cases.For each testcase:
The first line contains an integer N , the number of elements. The second line contains N space separated integers.

Output Format
Print the array after the 
replacement
replacement and it's values separated by space.

Constraints
1≤𝑇≤10
2≤N≤10^3
-10^5≤A[i]≤10^5

 
Sample Input 1
1
5
1 -2 0 3 4
Sample Output 1
1 2 0 1 1

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
void solve() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];

      if(arr[i]>0){
         arr[i]=1;
      }
      else if(arr[i]==0){
         arr[i]=0;
      }
      else{
         arr[i]=2;
      }
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<nn;
   
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




















