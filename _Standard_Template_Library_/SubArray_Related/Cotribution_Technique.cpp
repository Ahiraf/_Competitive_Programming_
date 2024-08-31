               //Find sum of all the subarray(when the length of the array is too large)

 /* How the Contribution Technique Works:
For any element at index i in an array, you can determine how many subarrays include this element.
For an array of length n, the element at index i can appear in i + 1 subarrays starting before or at index i and n - i subarrays ending at or after index i.
Therefore, the total number of subarrays that include the element at index i is (i + 1) * (n - i).
Applying the Technique:
Suppose you want to calculate the sum of all elements in all subarrays of a given array. Instead of generating all subarrays and summing them, you can sum the contributions of each element.
For each element arr[i], the total contribution to the sum of all subarrays is arr[i] * (i + 1) * (n - i).
Efficiency:
This technique reduces the complexity of finding the sum of all subarrays from O(n²) (if you were to generate all subarrays) to O(n), as you only need to iterate through the array once to calculate each element's contribution.

Example:
Consider the array arr = [1, 2, 3].
For arr[0] = 1:
It appears in 1 * 3 = 3 subarrays: [1], [1, 2], [1, 2, 3].
Contribution to sum = 1 * 3 = 3.
For arr[1] = 2:
It appears in 2 * 2 = 4 subarrays: [2], [1, 2], [2, 3], [1, 2, 3].
Contribution to sum = 2 * 4 = 8.
For arr[2] = 3:
It appears in 3 * 1 = 3 subarrays: [3], [2, 3], [1, 2, 3].
Contribution to sum = 3 * 3 = 9.
Total sum of all subarrays = 3 + 8 + 9 = 20.

General Formula:
For an array arr of length n, the sum of all subarrays can be calculated as: Total Sum=∑arr[i]×(i+1)×(n−i), Here 0 <= i <= (n-1)

*/

  
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
