//  Problem Url : https://codeforces.com/contest/230/problem/A
//Learnings : It was my mistake that I used map . Map only can store the unique elements;

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
const int maxn = 1000;

pair<int, int> arr[maxn];
 
void kodiko(){
    int s, n; cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i].first)
        {
            cout << "NO\n";
            return ;
        }
        else
        {
            s += arr[i].second;
        }
    }
    cout << "YES\n";
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
