#include "euler.h"




// Power digit sum
int problem16() {
    int x = 2, y = 1000;
    int l = y*log10(x)+1;
    int i, j, c, d, s = 0;
    int a[l];
    fill(&a[0], &a[l-1], 0);
    a[l-1] = 1;
    while (y--)
        for (c = 0, i = l-1; i >= 0; i -= 1) {
            d = a[i] * x + c;
            a[i] = d % 10; c = d/10;
        }
    return sum(&a[0], &a[l]);
}

int main() {
    freopen("problem16.cpp", "a", stdout);
    return run(problem16);
}

// 1366 // 0.00s
