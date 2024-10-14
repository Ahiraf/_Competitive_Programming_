// Problem Url : https://codeforces.com/contest/379/problem/A
// Learnings : I was only counting by dividing a and the remainders was avoided for this reason. So I have corrected this
//             by adding the ramainders with the answers or which result I was getting after diving a by b;

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;
 
void kodiko(){
    int a,b,candles=0;
    cin>>a>>b;
    candles=a;
    int temp=a,rem=0;
    while(temp>=b){
        rem=temp%b;
        temp/=b;
        candles+=temp;
        temp+=rem;
    }
    cout<<candles<<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
//This solution takes comparatively shorter time: 
 /* long long int ans=x;
while(x/y>0){
ans+=(x/y);
x=(x/y)+(x%y);
}
cout<<ans;
*/
