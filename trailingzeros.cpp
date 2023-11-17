//very inefficient solution TT

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int temp = 1;
    int min = 0;
    while (temp <= n) {
        temp *= 5;
        min++;
    }
    min--;

    int total = 0;
    int x = 1;
    for (int i=0; i<min; i++) {
        for (int j=0; j<i; j++) {
            x *= 5;
            total = total + n / x;
        }
    }
    cout << total;
}
