Problem Url : 
#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int i = 0, j = 0, cnt = 0;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                cnt++;
                i++;
            }
            j++;
        }
 
        cout << cnt << "\n";
    }
 
    return 0;
}
