//Problem Url: https://codeforces.com/contest/2003/problem/B
//Learnings : I misunderstood the question. I always started from i=0 and was doing the operations of Turtel and Piggy.
//            But Turtle can choose any element to make that one element maximum. Similarly pigggy can choose any element 
//            to make that one element minimum. So the final ans will be a balanced ans and that can be found after sorting 
//             the vector and the ans is the median element of the sorted vector.


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  sort(v.begin(),v.end());
  cout<<v[n/2]<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
