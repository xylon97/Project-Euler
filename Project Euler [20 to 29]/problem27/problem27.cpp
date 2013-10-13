#include "euler.h"





int count_primes(int b, int c) {
    int n = 1;
    while (is_prime(n*n + b*n + c)) n += 1;
    return n;
}

// Quadratic primes
int problem27() {
    int i, j, k;
    int b = 1, c = 41, m = 40;
    for (i = 1; primes[i] < 1000; i += 1) {
        for (j = -999; j <= 999; j += 2) {
            k = count_primes(j, primes[i]);
            if (k > m) m = k, b = j, c = primes[i];
        }
    }
    return b * c;
}

int main() {
    freopen("problem27.cpp", "a", stdout);
    return run(problem27);
}

// -59231 // 0.01s
