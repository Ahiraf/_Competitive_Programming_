//Problem Url:https://maang.in/problems/Number-of-Diagonals-68?resourceUrl=cs103-cp518-pl3503-rs68
/*A convex N-gon has N vertices. A diagonal is a line connecting two non-adjacent vertices. The key points here are:
Total Number of Line Segments: The total number of ways to choose 2 vertices out of N to form a line segment is given by the 
combination formula C(N,2), which is N(N−1)/2.Number of Sides: Each of the N sides of the polygon is also a line segment connecting 
two adjacent vertices.Thus, the number of diagonals is given by subtracting the number of sides from the total number of line segments:
Diagonals=C(N,2)−N= ((N*(N−1))/2)-N
This simplifies to:Diagonals= (N*(N−3))/2 */
​


#include<bits/stdc++.h>
using namespace std;
#define nn '\n'
#define int long long int
int MOD = 1e9+7;
 
signed main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = (n*(n-3))/2;
        cout<<ans%MOD<<nn;

    }
}


