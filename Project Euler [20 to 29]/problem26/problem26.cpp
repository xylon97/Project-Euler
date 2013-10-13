#include "euler.h"





int cycle(int n) {
    int a[n];
    int x = 1;
    fill(&a[0], &a[n], 0);
    for (int i = 1; i < n; i += 1) {
        x = (x * 10) % n;
        if (a[x]) return i - a[x];
        else a[x] = i;
    }
    return n - 1;
}

// Reciprocal cycles
int problem26() {
    int c, m = 1, n = 1;
    for (int i = 1; i < 1000; i += 1) {
        c = cycle(i);
        if (c > m) m = c, n = i;
    }
    return n;
}

int main() {
    freopen("problem26.cpp", "a", stdout);
    return run(problem26);
}

// 983 // 0.00s
