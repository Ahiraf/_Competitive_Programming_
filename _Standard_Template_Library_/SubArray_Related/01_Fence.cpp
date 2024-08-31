//Problem Url ; https://codeforces.com/contest/363/problem/B
// Learnings : The following technique is called the sliding window technique . It is more efficient than contribution technique.

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  int cur_sum=0;
  int min_index=0;
  for(int i=0;i<k;i++){
    cur_sum+=v[i];
  }
  int min_sum=cur_sum;
  for(int i=k;i<n;i++){
    cur_sum=(cur_sum-v[i-k])+v[i];
    if(cur_sum < min_sum){
      min_sum=cur_sum;
      min_index=i-k+1;
    }
  }
  cout<<min_index+1<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
