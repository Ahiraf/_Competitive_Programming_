//Any positive number n is expressible as a sum of two squares if and only if the prime factorization of n, 
//every prime of the form (4k+3) occurs an even number of times.

//Problem url : https://leetcode.com/problems/sum-of-square-numbers/description/


#include<bits/stdc++.h>
using namespace std;
int main()
{
        int c;
        for (int i = 2; i * i <= c; i++) {
            int count = 0;
            while (c % i == 0) {
                count++;
                c /= i;
            }
           if (i % 4 == 3 && count % 2 != 0){
             cout<<"C can be expressed as a^2 + b^2"<<"\n";
             return 0;
           }
        }
      cout<<"C can not be expressed as a^2 + b^2<<"\n"; 
    }
