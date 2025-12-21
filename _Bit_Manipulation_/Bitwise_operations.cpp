#include<bits/stdc++.h>
using namespace std;
 
#define nn "\n"
#define int long long int
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 3;
const int Max = 3001;
const int N = 1005;


int check_kth_bit(int n, int k){
    return (n >> k) & 1 ;
}

void print_on_bits(int n){
    for(int i = 0; i < 32; i++){
        if(check_kth_bit(n,i)){
            cout << i << " ";
        }
    }
    cout << nn; 
}

int set_kth_bit(int n, int k){
    return (1 << k) | n ;
}

int unset_kth_bit(int n, int k){
    return n & (1 << k)  ;
}

int toogle_kth_bit(int n, int k){
    return (1 << k) ^ n;
}

void Quanta()
{
  int a, b;
  cin >> a >> b;

  int k ; 
  cin >> k;
   
  cout << check_kth_bit(b, k) << nn;
  print_on_bits(a);
  cout << set_kth_bit(b, k) << nn;
  cout << unset_kth_bit(a, k) << nn;
  cout << toogle_kth_bit(a, k) << nn;
  
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //int test; cin >> test; while (test--)
    Quanta();
    return 0;
}
