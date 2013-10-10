#include "euler.h"




// Even Fibonacci numbers
int problem2() {
    int n = 4000000;
    int a, b, c, s = 2;
    a = 2, b = 8;
    while (b < n) {
        c = a; a = b;
        b += 3*b + c;
        s += a;
    }
    return s;
}

int main() {
    freopen("problem2.cpp", "a", stdout);
    return run(problem2);
}

// 4613732 // 0s
