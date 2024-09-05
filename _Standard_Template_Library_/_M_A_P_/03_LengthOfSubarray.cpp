//Problem Url : https://toph.co/p/the-depressed-guy

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int n;
  cin>>n;
  int max_len=1;
  map<int,int>m; // I forgot that map not only used for frequency.Here it stores the first position of every element.
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(m.count(x)==0)m[x]=i;
    else{
      max_len=max(max_len,(i-m[x])+1);// If the element has been seen before,it calculates the sub-array length
    }                                 //i denotes current position and m[x] denotes the position when x appeared first .
  }  
  cout<<max_len<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
