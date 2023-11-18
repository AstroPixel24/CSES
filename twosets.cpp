// CSES Introductory Problems - Two Sets

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sum = n*(n+1)/2;
    long long half = sum/2;

    if (sum % 2 == 0) {
        cout << "YES" << endl;
        if (n % 2 == 0) {
            cout << n/2 << endl;
            for (int i=1; i<=n/4; i++) {
                cout << i << " ";
            }
            for (int i=n; i>3*n/4; i--) {
                cout << i << " ";
            }
            cout << endl << n/2 << endl;
            for (int i=n/4 + 1; i<=3*n/4; i++) {
                cout << i << " ";
            }
        }
        
        if (n % 2 == 1) {
            int arr[n];
            bool printed[n] = {false};
            
            for (int i=0; i<n; i++) {
                arr[i] = i+1;
            }
            
            int count = 0;
            while (half > 0) {
                for (int i=n-1; i>=0; i--) {
                    if (half >= arr[i]) {
                        printed[i] = true;
                        count++;
                        half = half - arr[i];
                    }
                    if (half == 0) {
                        break;
                    }
                }
            }
            cout << count << endl;
            for (int i=0; i<n; i++) {
                if (printed[i]) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
            cout << n - count << " " << endl;
            for (int i=0; i<n; i++) {
                if (!printed[i]) {
                    cout << arr[i] << " ";
                }
            }
        }
    } else {
        cout << "NO";
        
    }
}
