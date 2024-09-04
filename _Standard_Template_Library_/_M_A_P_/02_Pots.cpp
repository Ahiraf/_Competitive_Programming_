//Problem: https://codeforces.com/gym/100942/problem/G
// Here I have tried to reduce the frequency of every elements of the map in every iteration. And also reduced the 
// the length when the frequency of any element became 0 .

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

void solve(){
  int n,pots=0;
  cin>>n;
 map<int,int>m;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  m[x]++;
 }
 while(!m.empty()) {
    for(auto j=m.begin();j!=m.end();) {
        j->second--;
        if(j->second == 0) {
          j=m.erase(j); // m.erase() returns a reference of the next element. j stores this next element's reference.
        } else {
            ++j; 
        }
    }
    pots++; 
 }

 cout<<pots<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    solve();
    return 0;
}
 
