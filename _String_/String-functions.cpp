/*Description :
Given two numbers N,Q and a string S of size N. Followed by Q lines of the following queries:
pop_back : remove the last character in the string.
front : print the first character in the string.
back : print the last character in the string.
sort l r : where (1≤l,r≤∣S∣) sort all characters of S froml to r.
reverse l r : where (1≤l,r≤∣S∣) reverse all characters of S from l to r.
print pos : where (1≤pos≤∣S∣) print the character in the index pos.
substr
substr l r : where (1≤l,r≤∣S∣) print sub-string of S from l to r.
push_back x : add character x in the end of the string.
For each query, print the answer associated with it in a single line.
It’s guaranteed that in the first 7 types of the query, the string is not empty.
it’s recommended to use built-in functions of String.


Input Format
The first line contains two integers N,Q. N denoting the size of the string and Q number of queries.
The second line contains the string S consists of only lowercase English letters.Next Q lines contain the queries.

Output Format
Output a single line for each testcase representing the answer of the query.

Constraints
1≤N,Q≤10 ^3

 

Sample Input 1
18 8
assiutinupperegypt
substr 1 6
sort 5 8
pop_back
back
reverse 1 6
front
push_back i
print 4

Sample Output 1
assiut
p
n
s


Sample Input 2
10 8
algozenith
substr 5 6
sort 5 8
pop_back
back
reverse 5 6
front
push_back a
print 5
Sample Output 2
ze
t
a
i
Sample Input 3
10 5
algozenith
sort 5 8
reverse 3 6
sort 2 5
push_back a
substr 1 10
Sample Output 3
aeilognzth  */


#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
const long long int Max=1e9+7;
void solve() {
   int n,q;
   cin>>n>>q;
   string s;
   cin>>s;
   while(q--){
      string s2;
      cin>>s2;
      if(s2=="pop_back"){
         s.pop_back();
      }
     else if(s2=="front"){
         cout<<s.front()<<nn;    
      }
     else if(s2=="back"){
         cout<<s.back()<<nn;        
      }
     else if(s2=="sort"){
         int l,r;
         cin>>l>>r;
         if(l>r)swap(l,r);
         sort(s.begin()+(l-1),s.begin()+r);    // [first,last)
      }
      else if(s2=="reverse"){
          int l,r;
         cin>>l>>r;
         if(l>r)swap(l,r);
       reverse(s.begin()+(l-1),s.begin()+r);    
      }        
     else if(s2=="print"){
         int i;
         cin>>i;
         cout<<s[i-1]<<nn;   
      }
      else if(s2=="substr"){
         int l,r;
         cin>>l>>r;
         if(l>r)swap(l,r);
         cout<<s.substr(l-1,(r-l)+1)<<nn;  //substr(starting_position,size_of_the_substring)
      }
   else if(s2=="push_back"){
         char x;
         cin>>x;
         s.push_back(x);       
      }
   }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test=1;
    // cin>>test;
    while(test--){
    solve();
   }
return 0;
}




