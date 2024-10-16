//Problem url : https://codeforces.com/contest/80/problem/A
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

bool is_prime(int n)
{
  int cnt=0;
  for(int i=1;i<=n;i++){
    if(n%i==0)cnt++;
  }
  if(cnt==2)return true;
  else return false;
}
void kodiko(){
  int n,m,flag=1;
  cin>>n>>m;
  for(int i=n+1;i<m;i++){
    if(is_prime(i))
    {
      flag=0;
      break;
    }
  }
  if(flag==0)cout<<"NO\n";
  else{
    if(is_prime(m))cout<<"YES\n";
    else{
      cout<<"NO\n";
    }
  }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
