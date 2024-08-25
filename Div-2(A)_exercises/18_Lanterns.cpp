//Problem Url : https://codeforces.com/contest/492/problem/B
// Learning : I did a mistake while type casting to double. At first I took the mDistance variable as integer . so after
//            division operation the ans was storing in the mDistance variable which was an integer variable. So I corrected
//            this and took mDistance as a double variable.

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n,l;
  cin>>n>>l;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  sort(v.begin(),v.end());
  double mDistance=0;
  for(int i=0;i<n-1;i++){
    mDistance=max(mDistance,(double)v[i+1]-v[i]);
  }
  mDistance=mDistance/2.0;
  double Isnotgiven = (double)max(v[0]-0,l-v[n-1]);
  mDistance=max(mDistance,Isnotgiven);
  cout<<fixed<<setprecision(10)<<mDistance<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
