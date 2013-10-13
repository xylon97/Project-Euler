#include "euler.h"




// 1000-digit Fibonacci number
int problem25() {
    int n = 1000;
    double SQRT5 = sqrt(5);
    double PHI = (1 + SQRT5)/2;
    double LOG10PHI = log10(PHI);
    double LOG10SQRT5 = log10(SQRT5);
    double ans = (n + LOG10SQRT5 - 1)/LOG10PHI;
    return ceil(ans);
}

int main() {
    freopen("problem25.cpp", "a", stdout);
    return run(problem25);
}

// 4782 // 0.00s
