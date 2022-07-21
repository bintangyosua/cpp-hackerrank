#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

// Function declaration
void update(int *a,int *b) {
    // Complete this function
    int result = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = *a + *b;
    *b = result;
}

int main() {
    // Variable declaration
    int a, b;
    int *pa = &a, *pb = &b;
    
    // Input variable using 'C' function 'scanf'
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // Print variable using 'C' function 'printf'
    printf("%d\n%d", a, b);

    return 0;
}
