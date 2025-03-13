//Problem : https://codeforces.com/contest/2074/problem/C
#include<bits/stdc++.h>

using namespace std;
#define nn "\n"
const int MAX = 1e2;


void kodiko(){
    int x,y = 0;
    cin >> x;
    for(int i = 0; x >> i; i++){ // The loop runs while x >> i is nonzero or stops when (x >> i == 0)
        y = (1<<i)-1; //Subtracting 1 gives a number with all bits set up to i.
    }
    vector<int>v = {x,y,(x^y)};
    sort(v.begin(),v.end());
    if(v[0] + v[1] > v[2]){
        cout << y << "\n";
    }
    else{
        cout << "-1\n" ;
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
