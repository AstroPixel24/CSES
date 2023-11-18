// CSES Introductory Problems - Two Knights

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n; // length of chessboard
    for (int i=1; i<=n; i++) { 
        long long a = i*i; // total number of squares on chessboard
        long long choose = (a)*(a-1)/2; // number of ways to choose two distinct squares on the chessboard 
        long long attack = (2*(i-2)) * (2*(i-2)+2); // found by trial and error: number of ways to position two knights so that they attack each other
        cout << choose - attack << endl; // subtracting yields the number of ways the knights do not attack each other
    }
}
