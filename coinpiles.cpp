// CSES Introductory Problems - Two Sets

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a, b;
    
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        
        if ((a+b) % 3 == 0) {
            if ((a - (a+b)/3) >= 0 && (b - (a+b)/3) >= 0) { // found by solving the equation 2x+y=a and x+2y=b
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

}
