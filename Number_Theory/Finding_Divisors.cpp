//Finding divisors of n elements//
#include <bits/stdc++.h>
using namespace std;
#define nn '\n'
#define ll long long int
#define ld long double
#define ii pair<long long, long long>
const long long int Max = 1e9 + 7;
long double PI = acos(-1);

const int MAXN = 100100;
vector<int> ans[MAXN];  //For global scope the length of vector can only be costant . 

// Precompute divisors up to 1000
void Divisors()
{
    for (int i = 1; i <= 1000; ++i)
    {
        for (int j = i; j <= 1000; j += i) //iterates over each multiple of i like, i,2i,3i,4i.......
        {
            ans[j].push_back(i); //keeps records that i is a divisor of j
        }
    }
}

// Function to find divisors of elements using precomputed values
vector<int> findDivisorsOfElements(const vector<int> &elements)
{
    vector<int> result;

    for (int num : elements)
    {
        // Append precomputed divisors
        result.insert(result.end(), ans[num].begin(), ans[num].end());
    }

    return result;
}

signed main() {
     Divisors(); // Precompute the divisors

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> elements(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    vector<int> divisors = findDivisorsOfElements(elements);

    cout << "Divisors of the given elements:" << nn;
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << nn;

    return 0;
}
