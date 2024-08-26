//Problem Url : https://codeforces.com/contest/2001/problem/B
//Learnings : According to the problem statement, it said that there were two typewriters typing from two different sides , right and left. So I have used deque
//            here. 

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
 int n; cin >> n;
 if(n % 2 == 0) cout << -1 << "\n";
 else {
   deque<int>dq; dq.push_back(1);
   for(int i = 2; i <= n; i++) {
    if(i % 2 == 0) dq.push_back(i);
    else dq.push_front(i);
  }
  while(!dq.empty()) {
    cout << dq.front() << " ";
    dq.pop_front();
  }
  cout << "\n";
 }    
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
