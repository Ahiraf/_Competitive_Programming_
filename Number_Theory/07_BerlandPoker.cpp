//Problem Url : https://codeforces.com/contest/1359/problem/A
// Learnings : At first I find max number of jokers a man can have. And that is n/k.
//             Then the number of man will be k-1 . And the remaining number of jokers will be m - (n/k).
//             Then I find out the second max number jokers . which is , ( m - (n/k) ) / (k-1) .
//             At last I substract the second max number of jokers from max number of jokers .
//             After finding the solution it I calculate it in a single line expression . 


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,m,k;
  cin>>n>>m>>k;
  cout<<min(m,((n-m)/(k-1)))<<nn;  // Main solution : n/k - ( (m - n/k) / (k-1) )
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
