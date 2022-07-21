#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    // Variable declaration
    int num1;
    long num2;
    char num3;
    float num4;
    double num5;
    
    // Input variable
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    // Print variable using 'C' function => 'printf()'
    printf("%d\n%ld\n%c\n%f\n%lf", *&num1, *&num2, *&num3, *&num4, *&num5);  
        
    return 0;
}
