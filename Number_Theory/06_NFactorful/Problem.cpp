//Problem Url : https://www.spoj.com/problems/NFACTOR/

#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001001
#define int long long

int is_prime[MAXN];
int prime_factors[MAXN];
map<int, vector<int>> mp;

void precompute() {
    for (int i = 2; i < MAXN; i++) {
        is_prime[i] = 1;
        prime_factors[i] = 0;
    }
    // Sieve of Eratosthenes
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i; j < MAXN; j += i) {
                is_prime[j] = 0;
                prime_factors[j]++;
            }
            is_prime[i] = 1; // Marking i as prime
        }
    }
    // Storing numbers by their number of prime factors
    for (int i = 1; i < MAXN; i++) {
        mp[prime_factors[i]].push_back(i);
    }
}
int count_n_factorful(int a, int b, int n) {
    if (mp.find(n) == mp.end()) {
        return 0;
    }
    int lessthanA = lower_bound(mp[n].begin(), mp[n].end(), a) - mp[n].begin();
    int lessthanB = upper_bound(mp[n].begin(), mp[n].end(), b) - mp[n].begin();
    return lessthanB - lessthanA;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute();
    int T;
    cin >> T;
    while (T--) {
        int a, b, n;
        cin >> a >> b >> n;
        cout << count_n_factorful(a, b, n) << "\n";
    }
    return 0;
}

