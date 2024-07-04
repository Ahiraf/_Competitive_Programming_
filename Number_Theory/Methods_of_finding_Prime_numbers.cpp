#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nn '\n'

int main(){

    //1) Checking if a number is prime or not by this process : if the number of its divisor=2
    int n,div=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            div++;
        }
    }
    if(div==2){
        //prime
    }
    //O(n)


    //but we can do this in a smaller time complesity by using divisor concept

    //56
    //2 divides 56
    //56 / 2 = 28 then 56 / 28 =2
    // it means if i divides n then n/i will also divide n
    //There is a point between i and n/i that is sqrt(n). or,i < sqrt(n) < n/i
    //i* (n/i) = n

    //Lambda function for finding the divisors: 
    auto countdivisors = [](int n){
        int div=0;
        for(int i=0 ; i*i<=n ; i++){
            if(n%i == 0){
                div++;
                if(i != (n/i)){
                    div++;
                }
            }
        }
        return div;
    }
    //i*i<=n
    //i<=sqrt(n)
    //O(sqrt(n))

 //counting divisors of all numbers from 1 to n
    int main(){
        int n,div;
        cin>>n;
        for(int i=1;i<=n;i++){
            div=countdivisors(i);
        }     
    }

    //O(n*sqrt(n))



//But 2 is the divisor of 2,4,6,8,10......so :
        vector<int>divcount(n+1,0)
        for(int i=1  ; i<=n ; i++){
            for(int j=i ; j<=n ; j+=i){
                divcount[j]++;
            }
        }
//Let n=6
// initially divcount = [0,0,0,0,0,0]
//when i=1 , j=1,2,3,4,5,6 ,then divcount=[1,1,1,1,1,1]  ..O(n)
//when i=2, j=2,4,6 , then divcount = [1,2,1,2,1,2]   O(n/2)

//total time complexity : O(n + n/2 + n/3 + n/4 + n/5 + n/6 + .......n/n or 1

//O(n*logn)

//how O(n*logn)? = n + (n/2 + n/2) + (n/4 + n/4 + n/4 + n/4) + .....
//               = n +     (n) +               (n) +   ........
//               = n * log(n)

    
//So finding all prime numbers from 1 to n there there 2 methods 
// 1) finding all divisors and if div == 2 then -> prime 
//but there is a better way then this.And that is , 
    
                                 // Sieve eratosthenes : 
    
 //print all the prime numbers between 1 to n :
    
void solve() {
   int n;
   cin>>n;
   int is_prime[n+1];
   for(int i=2;i<=n;i++){
     is_prime[i]=1;
   } 
   for(int i=2;i<=n;i++) {
     if(is_prime[i]){
       for(int j=2*i;j<=n;j+=i){ //this means if is_prime[i] is a prime number than it's multiple of 2 cannot be a prime number ...
          is_prime[j]=0;
        }
      }
   }
   for(int i=2;i<=n;i++){
       if(is_prime[i]){
          cout<<i<<" ";
        }
    }
    cout<<nn;
}
    // n = 10
    // [false, false, true, true, true, true, true, true, true, true, true]
    // i = 2, j = 4, 6, 8, 10
    // // [false, false, true, true, false, true, false, true, false, true, false]
    // i = 3, j = 6, 9
    // // [false, false, true, true, false, true, false, true, false, false, false], It means that all the Prime numbers are made true and others are false
    // O(n log(log(n)))


return 0;
}







