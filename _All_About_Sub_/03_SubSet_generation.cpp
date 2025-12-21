
// Key difference between subset and subsequence is the "Order"
// In subset order does not matter => 1,2 and 2,1 are same 
// In subsequence order matters . 
// There are 2^n subsets / subsequences of an array or string.


#include<bits/stdc++.h>
using namespace std;
 
#define nn "\n"
#define int long long int
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 3;
const int Max = 3001;
const int N = 1005;


void Quanta()
{
  int n; 
  cin >> n;

  vector<int> v(n);
  for(auto &it : v) cin >> it;
  
  for(int mask = 0; mask < (1 << n); mask++){ // total subsets = 2^n - 1 
    for(int i = 0; i < n; i++){
        if((mask >> i) & 1) { // if i'th bit is on then print it
           cout << v[i] << " ";
        }
    }
    cout << nn;
  } 
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //int test; cin >> test; while (test--)
    Quanta();
    return 0;
}

// O(n * 2^n)
