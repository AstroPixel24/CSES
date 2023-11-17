#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long sum = n*(n+1)/2;
    
    long long total = 0;
    
    for (int i=0; i<n-1; i++) {
        long long t;
        cin >> t;
        total += t;
    }
    
    cout << sum - total;
}
