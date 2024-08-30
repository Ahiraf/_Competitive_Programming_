// Problem Url : https://codeforces.com/contest/270/problem/A
// Learnings : The formula (number of sides−2)×180 is used to calculate the sum of the interior angles of a polygon.
              //The "2" in this formula is subtracted to account for the number of triangles that can be formed within the polygon when it is divided from a single vertex.
              //Triangles and Interior Angles: 
              //The basic polygon is a triangle, which has 3 sides and the sum of its interior angles is 180 degrees. This is where the "180" comes from.
              //Dividing a Polygon into Triangles:
              // Any polygon with more than 3 sides can be divided into triangles by drawing diagonals from one vertex to all non-adjacent vertices.The '2' in the formula 
              // has come from this triangles side . To make this triangle inside a polygon through a vertex we need two sides.


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define nn "\n"
#define pb push_back
const int MN = -1e9;

void kodiko(){
  int a;
  cin>>a;
  if(a<60){
    cout<<"NO\n";
    return;
  }
  double ans= 180.0/(180-a)*2;
  int m = ((ans*a)/180)+2;
  if(ans == m){
    cout<<"YES\n";
  }
  else {
    cout<<"NO\n";
  }
/*if(360%(180-a)==0){
    cout << "YES" << endl;
  } 
  else
  {
    cout << "NO" << endl;
  }
*/
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin >> test; while (test--)
    kodiko();
    return 0;
}
 
