/*  A number n can have at most 2*sqrt(n) divisors because :

A divisor d of n is a number that divides n without leaving a remainder. For each divisor d of n, there is a corresponding divisor n/d .This means that divisors come in pairs: if 
d is a divisor, then n/d is also a divisor.
For example, if n=36: The divisors are 1,2,3,4,6,9,12,18,36. These divisors can be paired as follows: (1,36),(2,18),(3,12),(4,9),(6,6).

Counting the Divisors : If d <= sqrt(n), then (n/d) >= sqrt(n)

Maximum Number of Divisors :if there are k divisors of n that are less than or equal to sqrt(n). Then, there are also k corresponding divisors that are greater than or equal t
sqrt(n). Thus, the total number of divisors is at most 2k.
  
To find the upper bound on the number of divisors:
k is the number of divisors less than or equal to sqrt(n) Since k must be less than or equal to n, we get k <= sqrt(n).Therefore, the total number of divisors is at most 
2k, and since 𝑘 <= sqrt(n) so it will be 2*sqrt(n).it is the upper limit, not the exact count, so the actual number of divisors can be any number up to this limit.  */


//given a number n. Find all the divisors of this number.

#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max=1e9+7;
long double PI=acos(-1);
#include <bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
const long long int Max = 1e9 + 7;
long double PI = acos(-1);

// Function to find and return divisors of a given number x
vector<ll> divisors(ll x) {
    vector<ll> ans;
    for (ll i = 1; i * i <= x; i++) { // Start from 1 to avoid division by zero
        if (x % i == 0) {
            ans.push_back(i);
            if (i != x / i) { // Avoid pushing the square root twice for perfect squares like 6*6 for 36.....it will take 6 once
                ans.push_back(x / i);
            }
        }
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> divs = divisors(n);
    for (ll d : divs) {
        cout << d << " ";
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
