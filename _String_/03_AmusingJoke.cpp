//Problem Url : https://codeforces.com/contest/141/problem/A
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
 string s,s1,s2,ans,temp;
 cin>>s>>s1>>s2;
 temp=s2;
 s=s+s1;
 for(int i=0;i<s.size();i++){
    for(int j=0;j<s2.size();j++)
    {
        if(s[i]==s2[j])
        {
            ans.push_back(s[i]);
            s2.erase(j,1);
            break;
        }
    }
 }
 if((ans.size()==temp.size()) && (ans==s))cout<<"YES\n";
 else cout<<"NO\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
