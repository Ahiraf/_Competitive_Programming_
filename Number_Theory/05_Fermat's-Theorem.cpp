//Any positive number n is expressible as a sum of two squares if and only if the prime factorization of n, 
//every prime of the form (4k+3) occurs an even number of times.
//summary of the theorem is, If (Prime factor of c%4==3) && (count of its prime factors % 2==0) then C can be expressed
//as the square of two positive integers.
//Prime factor of c%4==3: This checks whether the prime is of the form 4k+3.
//Count of its prime factors (exponent)%2==0 :This ensures that such primes appear an even number of times in the factorisation of c.

//Problem url : https://leetcode.com/problems/sum-of-square-numbers/description/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int i = 2; i * i <= c; i++) {
            int count = 0;
            while (c % i == 0) {
                count++;
                c /= i;
            }
            if (i % 4 == 3 && count % 2 != 0) return false;
        }
        return c % 4 != 3;
    }
}; // Time complexity : O(sqrt(c))

/*
Why Check c % 4 != 3?
If c % 4 == 3:c is a prime number congruent to 3 modulo 4, and its power is implicitly 1 (odd).This violates 
the sum-of-squares condition.In this case, the function should return false.

If c%4!=3: The remaining c is either ≡ 1 mod 4 or 𝑐 = 1.Both cases are valid under the sum-of-squares condition.
The function can safely return true.


Example 1:  c=10  , Prime factorisation: 10 = 2^1 × 5^1. Neither 2 nor 5 is of the form 4k+3.
Remaining c=1 after loop (no problematic primes).
Final return: 1%4!=3 → true. Finally, c = 1^2 + 3^2 .

 */
