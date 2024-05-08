/*Description:
Given an array 𝐴 of size 𝑁 and a number 𝑋 Print the array elements after shifting right the elements X times.
For example: if A=[1,2,3] then after shifting it to the right for 1 time A=[3,1,2].
Note: Solve this problem using function.

Input Format
First line will contain two number ,N and 𝑋
Second line will contain N numbers.

Output Format
Print the array after shifting right its elements X times.

Constraints
1≤𝑁≤10^4
1≤𝑋≤100
1≤𝐴[i]≤10^5
 

Sample Input 1
2 2
2 1
Sample Output 1
2 1
Sample Input 2
5 21
1 2 3 4 5
Sample Output 2
5 1 2 3 4
Sample Input 3
5 1
1 1 1 1 1
Sample Output 3
1 1 1 1 1*/

Solution : 
#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
void solve() {
   int n,x;
   cin>>n>>x;
   x%=n;
   vector<int>arr;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
   }
   for(int i=n-x;i<n;i++){
    cout<<arr[i]<<" ";
   }
   for(int i=0;i<n-x;i++){
    cout<<arr[i]<<" ";
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






























  
