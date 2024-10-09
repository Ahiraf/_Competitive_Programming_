//Problem Url : https://codeforces.com/contest/228/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;
const int N=1e5;

void kodiko(){
 vector<int>v(4);
 set<int>s;
 for(int i=0;i<4;i++){
  cin>>v[i];
  s.insert(v[i]);
 }
 cout<<4-s.size()<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
