#include "euler.h"





// Non-abundant sums
int problem23() {
    int n = 20162;
    int a[n], ab[n/2];
    bool b;
    fill(&a[0], &a[n], 1);
    int i, j, k, l = 0, s = 0;
    for (i = 2; i < n/2; i += 1)
        for (j = 2*i; j < n; j += i) a[j] += i;
    for (i = 1; i < n; i += 1) {
        for (b = 1, j = 0; b && j < l; j += 1) {
            k = i - ab[j];
            if (a[k] > k) b = 0;
        }
        if (b) s += i;
        if (a[i] > i) ab[l++] = i;
    }
    return s;
}

int main() {
    freopen("problem23.cpp", "a", stdout);
    return run(problem23);
}

// 4179871 // 0.01s
