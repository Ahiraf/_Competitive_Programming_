/* n=a×b where a <= sqrt(𝑛) and b≥ n. If both a and b were greater than sqrt(n),then,a×b would be greater than 
sqrt(n), which contradicts the assumption that a×b=n.
Therefore, at least one factor in each pair must be <= sqrt(n) and >= sqrt(n).

*/
//Given a number n. Find all the prime factors of it and their counts


#include <bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
#define ii pair<long long, long long>
const long long int Max = 1e9 + 7;
long double PI = acos(-1);

vector<ii> Factor(ll x) {  //return vector of pairs ...The pairs will represent the prime factors and their counts.
    vector<ii> ans;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            int cnt = 0;
            while (x % i == 0) {
                cnt++;
                x /= i;
            }
            ans.push_back({i, cnt});
        }
    }
    if (x > 1) {         //After the loop, if x is greater than 1, it means x itself is a prime number and should be added to ans with a count of 1.
      ans.push_back({x, 1});  //This handles the case where x is prime or a product of primes greater than its square root.
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ii> facts = Factor(n);  
    for (auto& f : facts) {  
        cout << f.first << " " << f.second << nn; 
    }
    cout << nn;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll test; cin >> test; while (test--)
    solve();
    return 0;
}
