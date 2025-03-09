/* Problem Statement : Given a number 𝑁 . Print ⌊𝑙𝑜𝑔2(𝑁)⌋.
Note: Solve this problem using recursion.

Input : Only one line containing a number 𝑁 (1≤𝑁≤1018).
*/

#include<bits/stdc++.h>

using namespace std;
#define nn "\n"
const int MAX = 1e2;

int log2(long long n){
    if(n == 1)return 0;
    int total = 1;// Ekhon ei function ke jotobar call kora hobe totobar ei bodyr moddhe diye jawar shomoi 1 return hobe .
    total += log2(n/2);

   return total;
}
void kodiko(){
    long long n;
    cin >> n;
    cout << log2(n) << "\n";
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kodiko();
    return 0;
}
 
/*Let's trace the function call when n=8:

Call: log2(8)
𝑛 ≠ 1 so we set total = 1.
Then we call log2(8/2), which is log2(4).

Call: log2(4)
Again, 𝑛 ≠ 1,p so total = 1.
Now we call log2(4/2), which is log2(2).

Call: log2(2)
𝑛 ≠ 1, so total = 1.
Then we call log2(2/2), which is log2(1).

Call: log2(1)
Here n==1, so we hit the base case and return 0.
Now, we combine the results:

Returning from log2(2):
total = 1 + log2(1) = 1 + 0 = 1
So, log2(2) returns 1.

Returning from log2(4):
total = 1 + log2(2) = 1 + 1 = 2
So, log2(4) returns 2.

Returning from log2(8):
total = 1 + log2(4) = 1 + 2 = 3
So, log2(8) returns 3.

Summary
For n=8, the function returns 3. This count represents the number of times the function divides 
n by 2 until it reaches 1:

8→4 (first division),
4→2 (second division),
2→1 (third division).*/
