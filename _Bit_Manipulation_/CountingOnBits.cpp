#include <bits/stdc++.h>
using namespace std;
#define nn "\n"

int CntOnBits(int n){
    int count=0;
    for(int i=0;i<10;i++){
        count+=((n>>i)&1);// O(log(n))
    }
    return count;
}
void solve() {

    int n;
    cin>>n;
    int count =0;
    for(int i=1;i<=n;i++){
        count+=CntOnBits(i); 
      // Or I can use builtin funciton for O(1),  count+=__builtin_popcount(i);
        
    }
    cout<<count<<nn;  
    
}

int main() {
    int t;
    cin >> t;while(t--)
     solve();
}
