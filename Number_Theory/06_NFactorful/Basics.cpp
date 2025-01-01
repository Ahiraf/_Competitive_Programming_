/* Given an array with size n . Find how many elements are there in the range of l to r which have value equal to x */ 

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back

void kodiko() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (auto& it : v) cin >> it; // Using reference to read input correctly
    
    map<int, vector<int>> mp; // Map of all the positions of all elements where elements store as key and positions store as the value of those keys
    for (int i = 0; i < n; ++i) { 
        mp[v[i]].push_back(i + 1); // Storing  1-based index
     // Think like the whole mp[v[i]] is the name of the vector
    }
   /* For debugging  : Printing the whole map 
    for(auto &it : mp){ // as there is  a vector inside the map , I have to use two loops to print the whole map
        cout<<it.first<<" : ";
        for(auto &pos : it.second){
        cout<<pos<<" ";
        }
        cout<<nn;
    }
    */

    // Finding the range of indices in the map for the value x
    int lessThanL = lower_bound(mp[x].begin(), mp[x].end(), l) - mp[x].begin();
    int lessThanR = upper_bound(mp[x].begin(), mp[x].end(), r) - mp[x].begin();

    int ans = lessThanR - lessThanL;
    cout << ans << nn;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
