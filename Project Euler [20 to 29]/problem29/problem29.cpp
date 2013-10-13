#include "euler.h"




// Distinct powers
int problem29() {
    int m = 100, n = 100;
    bool a[m+1][n+1];
    int i, j, k, l, p, q, r, s = 0;
    for (i = 2; i <= m; i += 1) fill(&a[i][0], &a[i][n+1], true);
    for (i = 2; i <= m; i += 1)
        for (p = i, q = 1; p <= m; p *= i, q += 1)
            for (j = 2; j <= n; j += 1)
                for (k = q * j, l = 2; l < k; l += 1) {
                    if (l * log(i) > log(m)) break;
                    r = pow(i, l);
                    if (k % l == 0 && r > p) a[r][k/l] = false;
                }
    for (i = 2; i <= m; i += 1)
        for (j = 2; j <= n; j += 1) s += a[i][j];
    return s;
}


int main() {
    freopen("problem29.cpp", "a", stdout);
    return run(problem29);
}

// 9183 // 0.00s
