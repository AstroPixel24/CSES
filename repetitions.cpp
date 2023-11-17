#include <iostream>
using namespace std;
 
int main() {
    string s;
    int count = 1;
    int max = 0;
    
    cin >> s;
 
    for (int i=0; i<s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
        if (s[i] != s[i+1]) {
            if (count >= max) {
                max = count;
            }
            count = 1;
        }
    } 
    
    if (max >= count) {
        cout << max;
    } else {
        cout << count;
    }
