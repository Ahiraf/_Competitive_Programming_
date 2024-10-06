//Problem Url :https://atcoder.jp/contests/abc361/tasks/abc361_a
// Learnings: Use insert() function of vector


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn "\n"
#define pb push_back
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr.insert(arr.begin()+k,x);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--) 
        solve();
    return 0;
}
