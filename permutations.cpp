#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++) {
        arr[i] = i;
    }
   if (n == 1) {
       cout << 1;
   }
   if (n <= 3 && n != 1) {
       cout << "NO SOLUTION";
   }
   
   if (n % 2 == 0 && n > 3) {
        cout << n/2 + 1<< " ";
       
        for (int i=1; i <= n-2; i++) {
            if (arr[i] % 2 == 0) {
                cout << n - i/2 + 1 << " ";
            }
            if (arr[i] % 2 == 1) {
                cout << (i+1)/2 << " ";
            }
        }
       
        cout << n/2;
   }
   if (n % 2 == 1 && n > 3) {
       cout << (n+1)/2 << " ";
       for (int i=1; i <= n-1; i++) {
           if (arr[i] % 2 == 0) {
               cout << n - i/2 + 1 << " ";
           }
           if (arr[i] % 2 == 1) {
               cout << (i+1)/2 << " ";
           }
       }
   }
