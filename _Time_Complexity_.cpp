#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h> 
 
using namespace std;

int main(){
    int n, m;







    for(int i = 1; i <= n; i++) {
        // work done in O(1)
        int a = 0;
        a += 5;
    }
    // O(n) * whatever we doing inside = O(1)
    // O(n)






    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            // work done in O(1)
        }
    }
    // O(n) * whatever we doing inside loop = O(n)
    // O(n * n)








    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            // work done in O(m)
        }
    }
    // O(n * n) * work done in O(m)
    // O(n * n * m)


    for(int i = 1; i <= n; i++) {
        // wash clothes
        // clean room

        // work done in O(m)
        for(int j = 1; j <= n; j++) {
            // work done in O(1)
        }

    }
    // O(n) * (O(m) + O(n))                         
    // O(n * (m + n)) = O(n * m + n * n)




 for(int i = 1; i*i <= n; i++) {      //O(sqrt(n))
       //work done in o(1)
 }


 
for(int i = 1; i <= n; i++) {   
        for(int j = 1; j <= i; j++) {  //1+2+3+4+5+6+.........sqrt(n) =( sqrt(n)(sqrt(n)+1) ) / 2
            // work done in O(m)
        }
    }




for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j*=2) {  
            // work done in O(m)
        }
    }
 //In 1st time , 1 bar cholbe , i=1
 // 2 bar ,i = 2
 // 2 bar , i= 3 
 // 3 bar , i=4
 // 3 bar , i=5
 // 1 , 2 , 4 , 8 , 16 , ............. i = O(log(i)). and i will be up to n and the outer loop will be iterate up to n times so the total time complexity will be O(nlog(n)).
 



for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j+=i) { // i , 2i , 3i , 4i , .......i >=n     so, number of iterations of the inner loop is n/i times
            // work done in O(1)
        }
    }
// for the outer loop , n/1 + n/2 + n/3 + n/4 + n/5 +.......n/n = n(1/1 + 1/2 + 1/3 + 1/4 .......) = O(logn)
 // total = O(nlog(n))








 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            // at this position
            // work done in O(m)
        }
    }
    // 1 + 2 + 3 + 4 + .......n = n * (n + 1) / 2 = n * (n) 
    // O(n * n) * O(m) = O(n * n * m)





    int sum = 0;
    for(int i = 1; sum <= n; i++) {
        sum += i;
        // constant operation
    }
    // k times
    // 1
    // 1 + 2 = 3
    // 6
    // 4th times loop - 10
    // 1 + 2 + 3..... + k > n
    // k * (k + 1) / 2 = n
    // k * k = n
    // k = sqrt(n)
    // O(sqrt(n))









    // k * k <= n, k = sqrt(n)



 
                                          //Master Theorem//

 int power(int a, int b){
     if(!b)return 1;
     int temp= power(a,b/2)*Power(a,b/2);
     if(b%2==1)temp*=a;
     return temp;
 }
 // it is a function to find a^b  so according to master theorem , T(b) = power(b) , T(b) = 2T(b/2) + O(1) 
 //to apply master theorem here A=2 , B=2 , C=O(1) so, n^(logB(A)) = n^(log2(2)) = n 
 // totla = O(n)



 
int power(int a, int b){
     if(!b)return 1;
     int temp= power(a,b/2)*Power(a,b/2);
     temp*=temp;
     return temp;
 }
 // it is a function to find a^b  so according to master theorem , T(b) = power(b) , T(b) = 1T(b/2) + O(1) 
 //to apply master theorem here A=1 , B=2 , C=O(1) so, n^(logB(A)) = n^(log2(1)) = n^0 = 1
 // totla = O(log(n))










 
    for(int i = 1; i <= n; i += 2) {
        // work done in O(1)
    }
    //  i = 1,  i = 3 ,5 , 7, 9
    // n / 2
    // O(n)










    for(int i = 1; i <= n; i *= 2) {
        // work done in O(1)
    }
    // 1, 2, 4, 8, 16, 32.....2 ^ i
    // k times run
    // 2 ^ k > n
    // k = logn
    // O(logn)







    
    // 2 ^ k = n, k = log2(n)










    for(int i = n; i >= 1; i /= 2) {
        // work done in O(1)
    }







    for(int i = n; i >= 1; i /= 2) {
        // work done in O(m)
    }








    int low = 1, high = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        bool op;
        // work done in O(m) and output in op
        if(op) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // N distance 
    // N / 2
    // N / 4
    // O(m * LogN)










    // T(n) = T(n/2) + O(1)
    // T(n) = O(log2(n))
    // Master Theorem
    // in half = log2(n)













    // sieve of eratosthenes
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++) {
        if(is_prime[i] && (long long)i * i <= n) {
            for(int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }















    // O(n log log n)












    int k = 1;
    for(int i = 1; i <= n; i++) {
        if(i > k) {
            // do operations k times
            // 1, 2, 4, 8...... k = n
            k *= 2;
        }
    }
    // O(n)
    // 0
    // 1 operations
    // i = 2, 0 
    // 3, 2 = 2 opeartions  
    // i = 4, k = 4, 0 opearations
    // i = 5, k = 4, 4 opeartions


    // 1 + 2 + 4 + 8 + 16.............n

    // n + n / 2, n / 4, n / 8............... = 2 * n
    // a / (1 - r) = n / (1 - 1 / 2) = 2 * n
    
    // O(2 * n) + O(n) = O(n)













    // amortized time complexity = average time complexity
    // O(n) + O(n/2) + O(n/4) + O(n/8) + ... + O(1) = O(n)
    // vector does this in memory allocation







    for(int i = 1; i <= n; i++) {
        // work done = 5 operations
    }
    // 5 * n 
    // O(n)
    // n = 10 ^ 5, 5 * 10 ^ 5







    for(int i = 1; i <= n; i++) {
        // work done = 50 operations
    }
    // 50 * n 
    // n = 10 ^ 5, 50 * 10 ^ 5








    for(int i = 1; i <= n; i++) {
        // work done = 5000 operations
    }
    // 5000 * n 
    // n = 10 ^ 5, 500 * 10 ^ 5 = 5 * 10 ^ 8 > 10 ^ 8


    // n = 10
    // n = 20
    // n = 1000
    // sum of n <= 2 * 10 ^ 5
    // O(n * t)
    // O(n) = 2 * 10 ^ 5

    // n = 100, n ^ 4 = 10 ^ 8
    // n = 1000, n ^ 2 = 10 ^ 8
    // n = 1e7, O(n)


    return 0;
}
