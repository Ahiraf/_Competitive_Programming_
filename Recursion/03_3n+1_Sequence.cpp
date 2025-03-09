/*
Given a number 𝑛 , you should print the length of the 3𝑛+1 sequence starting with 𝑛.The sequence is constructed as follows:

If the number 𝑛 is odd, the next number will be 3𝑛+1.
If the number 𝑛 is even, the next number will be 𝑛/2.
For example, the 3𝑛+1  sequence of 3 is {3,10,5,16,8,4,2,1} and its length is 8.
Note: Solve this problem using recursion.

Input :
Only one line containing a number 𝑛 (1≤𝑛≤105).
Output : 
Print the length of 3𝑛+1. Sequence of the given 𝑛.

  */

#include<bits/stdc++.h>

using namespace std;
#define nn "\n"
const int MAX = 1e2;

int sequ(int n){
    if(n == 1)return 1;
    int total = 1;
    if(n%2){
        total += sequ((3*n)+1);
    }
    if(n%2==0)total += sequ(n/2);
    return total;

}
void kodiko(){
    int n;
    cin >> n;
    cout << sequ(n) <<nn;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kodiko();
    return 0;
}
 
