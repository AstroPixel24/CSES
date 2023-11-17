#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long pow = 1;;
    for (int i =0; i<n; i++) {
        pow = pow * 2;
        pow %= 1000000007;
    }
    cout << pow ;    
