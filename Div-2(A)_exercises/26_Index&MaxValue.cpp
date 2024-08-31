//Problem Url : https://codeforces.com/contest/2007/problem/B
//Learnings : It was a greedy-type problem. The challenging part of this type of solution is proving that it works. 
//            My mistake was thinking that the primary maxi value (which was the last element of the vector 
//            before performing any operations) would change if it was not within the range of l and r. I thought 
//            that if this happened continuously, then the maxi value of the vector would change. But that was not 
//            the case. The primary maxi value will not change because if I continuously give input for l and r in 
//            such a way that the maximum value doesn't stay within the range, other elements of the vector will 
//            increase by 1 and can eventually reach the maxi value.They cannot be greater than the maxi value.



#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back()
#define yes() cout<<"YES"<<"\n"
#define no() cout << "NO" << "\n"
#define all(x) (x).begin(),(x).end()
const int MN = -1e9;

void kodiko(){
  int n,m,ans=0;
  cin>>n>>m;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  int maxi=*max_element(all(v));
  while(m--){
    char c; int l,r;
    cin>>c>>l>>r;
    if(l<=maxi && r>=maxi){
      if(c=='+'){
        maxi++;
        cout<<maxi<<" ";
      }
      else if(c=='-'){
        maxi--;
        cout<<maxi<<" ";
      }
    }
    else{
      cout<<maxi<<" ";
    }
  }
  cout<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
