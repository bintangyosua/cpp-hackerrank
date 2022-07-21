#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d); // Prototype function declaration

int main() {
    // variable declaration (a, b, c, d)
    int a, b, c, d;
    // print variable
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // search the max value of the variable above
    int ans = max_of_four(a, b, c, d);
    // print max value
    printf("%d", ans);
    
    return 0;
}

// Funtion declaration
int max_of_four(int a, int b, int c, int d) {
  int result = max(a, b);
  result = max(result, c);
  return max(result, d);
};
