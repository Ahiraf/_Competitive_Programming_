// Problem Statement : https://codeforces.com/contest/2082/problem/A

#include<bits/stdc++.h>

using namespace std;
#define nn "\n"
const int MAX = 1e2;

void kodiko(){
    int m,n;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m));
    vector<int>r(n,0),c(m,0);
    for(int i=0 ;i < n;i++){
        string row; // As the inputs are given as strings
        cin >> row;
        for(int j=0;j < m;j++){
            v[i][j] = row[j];
        }
    }
    for(int i=0 ;i < n;i++){
        for(int j=0;j < m;j++){
             r[i] = r[i]^(v[i][j] - '0'); // As every elements of r is initialised by 0 the XOR with 0 will not change the real number
        }
    }
    for(int i=0 ;i < m;i++){
        for(int j=0;j < n;j++){
             c[i] = c[i]^(v[j][i] - '0');
        }
    }
    int Num_of_r_one = 0;
    int Num_of_c_one = 0;
    for(int i = 0 ; i < n;i++){
        if(r[i] == 1)Num_of_r_one++;
    }
    for(int i = 0 ; i < m;i++){
        if(c[i] == 1)Num_of_c_one++;
    }
    int count = max(Num_of_c_one, Num_of_r_one);
    if((Num_of_c_one+Num_of_r_one)%2) count++;  // if the total number of one's is odd then it will create an imbalance, hence needs an extra flip
    cout << count << nn;
    
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
