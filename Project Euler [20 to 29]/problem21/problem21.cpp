#include "euler.h"




// Amicable numbers
int problem21() {
    int n = 10000;
    int a[n];
    int i, j, s = 0;
    fill(&a[1], &a[n], 1);
    for (i = 2; i < n/2; i += 1)
        for (j = 2 * i; j < n; j += i) a[j] += i;
    for (i = 2; i < n; i += 1)
        if (a[i] < i && a[a[i]] == i) s += i + a[i];
    return s;
}

int main() {
    freopen("problem21.cpp", "a", stdout);
    return run(problem21);
}

// 31626 // 0.00s
