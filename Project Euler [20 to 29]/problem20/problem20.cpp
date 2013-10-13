#include "euler.h"




// Factorial digit sum
int problem20() {
    int n = 100;
    int l = n*log10(n);
    int a[l];
    int m, i, j, c, d, s = 0;
    fill(&a[0], &a[l-1], 0);
    a[l-1] = 1;
    for (m = 2; m <= n; m += 1) {
        for (c = 0, i = l-1; i > 0; i -= 1) {
            d = a[i] * m + c;
            a[i] = d % 10; c = d/10;
        }
    }
    return sum(&a[0], &a[l]);
}

int main() {
    freopen("problem20.cpp", "a", stdout);
    return run(problem20);
}

// 648 // 0.00s
