#include "euler.h"




// Special Pythagorean triplet
int problem9() {
    int p = 1000;
    int s = p/2;
    int m, n, k, a, b, c;
    for (m = 1; m * m < s; m += 1)
        for (k = 1; k <= s/(m*m); k += 1)
            if (s % (m*k) == 0) {
                n = s/(m*k) - m;
                if (n > 0 && n < m) {
                    a = k*(m*m + n*n);
                    b = k*(m*m - n*n);
                    c = k*(2*m*n);
                    return a * b * c;
                }
            }
    return -1;
}

int main() {
    freopen("problem9.cpp", "a", stdout);
    return run(problem9);
}

// 31875000 // 0.00s
