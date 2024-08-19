//Problem Url : https://codeforces.com/contest/579/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
 
void kodiko(){
    int n,count=0;
    cin>>n;
    while(n>0){
        count+=(n&1);
        n>>=1;
    }
    cout<<count<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
