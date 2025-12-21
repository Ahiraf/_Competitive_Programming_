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
  
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        for(int k = i; k <= j; k++){
            cout << v[k] << " ";
        }
        cout << nn;
    }
  }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //int test; cin >> test; while (test--)
    Quanta();
    return 0;
}
