/* Problem Statement : Given two matrices A and B of size R * C. Print the summation of A and B.
Note: Solve this problem using recursion.

Input :
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.
Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.
Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers

Test Case : 

Input :                  Output :
2 3                      2 5 8                         
1 2 3                    11 14 17
4 5 6
1 3 5
7 9 11

*/

#include<bits/stdc++.h>
 
using namespace std;
#define nn "\n"
const int MAX = 1e2;
 
int R,C;
vector <vector<int>> v1(MAX,vector<int>(MAX,0));
vector <vector<int>> v2(MAX,vector<int>(MAX,0));
void  Sum (int i, int j){
    if(i >= R ) return ;
    if(j >=  C){
        cout << "\n";
        Sum(i+1 ,0);
        return; // I forgot to add this return and the output was not showing 
    }
    cout << v1[i][j] + v2[i][j] << " ";
 
    Sum(i,j+1);
}
void kodiko(){
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> v1[i][j];
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> v2[i][j];
        }
    }
   
    Sum(0,0);   
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kodiko();
    return 0;
}
 
