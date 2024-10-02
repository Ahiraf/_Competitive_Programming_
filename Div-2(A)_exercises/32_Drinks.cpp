//Problem Url : https://codeforces.com/contest/200/problem/B

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
  int n;
  cin>>n;
  vector<double>v(n);
  for(auto &it:v)cin>>it;
  double totalOrange=0;
  for(int i=0;i<n;i++)
  {
    v[i]/=100.00;
    totalOrange+=v[i];
  }
  // The outputs of the given test cases shows that the ans should be up to 12 digits after the decimal point.That's 
  //why I have to take double type variables....
  double x = totalOrange/n;
  cout<<fixed<<setprecision(12)<<x*100.00<<nn;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
