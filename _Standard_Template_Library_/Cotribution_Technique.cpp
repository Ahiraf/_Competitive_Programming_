//Find sum of all the subarray 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back

void kodiko()
{
    int N; cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int ans=0;
    int multi=1;
    for(int st=0;st<N;st++){
        multi=(st+1)*(N-st)*arr[st];
        ans+=multi;
    }
    cout<<ans<<'\n';
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  // int test; cin >> test; while (test--) 
        kodiko();
    return 0;
}
