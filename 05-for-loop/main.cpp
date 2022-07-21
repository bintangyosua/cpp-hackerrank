#include <iostream>
#include <cstdio>
#include <array>
using namespace std;

// Array declaration using template
array <string, 10> arr = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    // Complete the code.
    
    // Variable declaration (a, b)
    int a, b;
    
    // Input variable (a, b)
    cin >> a;
    cin >> b;    
    
    // Looping
    for (int n = a; n <= b; n++) {
        cout << ((n<=9) ? arr[n] : ((n%2==0) ? "even" : "odd")) << endl;
    }
    
    return 0;
}
