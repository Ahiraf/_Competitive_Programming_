//Problem Url : https://codeforces.com/contest/148/problem/A

/* The Inclusion-Exclusion Principle : 
It says that if we have to find the union of two sets, let's say A and B, then if we just add them up, like 
S(A∪B)=A+B,there will be some errors if there are common elements in these two sets, which will be counted twice.
So, we have to subtract the double count. Therefore, the correct formula is S(A∪B)=A+B−(A∩B).

if there are 3 sets ,∣A∪B∪C∣=∣A∣+∣B∣+∣C∣ (sum of individual sets)
                             −(∣A∩B∣+∣A∩C∣+∣B∩C∣) (subtract pairwise intersections
                             +∣A∩B∩C∣ (add intersection of three sets)

For 4 sets : ∣A∪B∪C∪D∣=∣A∣+∣B∣+∣C∣+∣D∣ (sum of individual sets)
             −(∣A∩B∣+∣A∩C∣+∣A∩D∣+∣B∩C∣+∣B∩D∣+∣C∩D∣) (subtract pairwise intersections)
             +(∣A∩B∩C∣+∣A∩B∩D∣+∣A∩C∩D∣+∣B∩C∩D∣) (add intersections of three sets)
             −∣A∩B∩C∩D∣ (subtract intersection of all four sets)  */

/* 
In the second test case, if the princess starts counting like this, 
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 
  here k=2, so 2,4,6,8,10,12,14,16,18,20,22,24
       l=3, so 3,6,12,15,18,21,24
       m=4, so 4,8,12,16,20,24
       n=5, so 5,10,15,20
These are four sets. and 1, 7, 11, 13, 17, 19 and 23 are not divisible by any of k,l,m and n.
*/

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

int lcm2(int a,int b)
{
  int gcd = __gcd(a,b);
  return (a*b)/gcd;
}
int lcm3(int a,int b, int c)
{
  //int gcd = __gcd(a,__gcd(b,c));
  return lcm2(a,lcm2(b,c));
}
int lcm4(int a,int b,int c, int d)
{
  //int gcd = __gcd(__gcd(a,b),__gcd(c,d));
  return lcm2(lcm2(a,b),lcm2(c,d));
}

void kodiko(){
  int k,l,m,n,d,cnt=0;
  cin>>k>>l>>m>>n>>d;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  int uni = d/k + d/l + d/m + d/n ;
  int commonfor2sets = d/(lcm2(k,l)) + d/(lcm2(k,m)) + d/(lcm2(k,n)) + d/(lcm2(m,l)) + d/(lcm2(n,l)) + d/(lcm2(m,n)) ;
  int commonfor3sets = d/(lcm3(k,l,m)) + d/(lcm3(k,l,n)) + d/(lcm3(n,l,m)) + d/(lcm3(k,m,n)) ;
  int commonfor4sets = d/(lcm4(k,l,m,n));
  
  int finalUnion = uni-commonfor2sets+commonfor3sets-commonfor4sets;
  cout<<finalUnion<<nn;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int test; cin >> test; while (test--)
    kodiko();
    return 0;
}

/*
void kodiko(){
  int k,l,m,n,d,cnt=0;
  cin>>k>>l>>m>>n>>d;
  vector<int>v(n);
  for(auto &it:v)cin>>it;
  for(int i=1;i<=d;i++){
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
      cnt++;
    }
  }
  cout<<cnt<<nn;
}
*/
 
