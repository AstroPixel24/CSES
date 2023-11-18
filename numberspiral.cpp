// CSES Introductory Problems - Number Spiral

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x, y; // x and y coordinates of the point
        cin >> y >> x;

        long long a = max(x, y); // larger val of a and b
        long long aval = a * a - a + 1; // computes the value of (a, a), our solution is based on the coordinates on the diagonal

        if (x == y) {
            cout << aval << endl;
        }

        if (x < y) { 
            if (a % 2 == 0) { // diagonal is (a, a) & a is even --> if unit is (b, a) when b < a, then (a, b) = (a, a) + (a-b);
                cout << aval + (y - x) << endl;
            }
            if (a % 2 == 1) { // diagonal is (a, a) & a is odd --> if unit is (b, a) when b < a, then (a, b) = (a, a) - (a-b);
                cout << aval - (y - x) << endl;
            }
        }

        if (x > y) { 
            if (a % 2 == 0) { // diagonal is (a, a) & a is even --> if unit is (a, b) when b < a, then (a, b) = (a, a) - (a-b);
                cout << aval - (x - y) << endl;
            }
            if (a % 2 == 1) { // diagonal is (a, a) & a is odd --> if unit is (a, b) when b < a, then (a, b) = (a, a) + (a-b);
                cout << aval + (x - y) << endl;
            }
        }
    }
}
