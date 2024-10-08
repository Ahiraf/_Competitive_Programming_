//Problem Url : https://codeforces.com/contest/272/problem/A
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
 int n,total=0,ans=0;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
   cin>>v[i];
   total+=v[i];
 }
 n++; // Dima + friends
   for(int i=1;i<=5;i++)
   {
      total++; // Adding all fingers of dima but the ans will be only those fingers which satisfy the condition
      if((total%n)!=1)
      {
        ans++;
      }
   }
 cout<<ans<<nn;
 }

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
