#include "euler.h"





const int MAX_LEN = 10000000;
int cache[MAX_LEN/2];


int collatz(long long int n) {
    int c, ans, s = 0;
    while (n % 2 == 0) n /= 2, s += 1;
    if (n < MAX_LEN) {
        c = cache[n/2];
        if (c) return c;
    }
    ans = collatz((3*n+1)/2) + s + 2;
    if (n < MAX_LEN) cache[n/2] = ans;
    return ans;
}

// Longest Collatz sequence
int problem14() {
    int n = 1000000;
    cache[0] = 1;
    int i, c, x = 1, m = 1;
    for (i = n/2; i < n; i += 1) {
        c = collatz(i);
        if (c > m) m = c, x = i;
    }
    return x;
}

int main() {
    freopen("problem14.cpp", "a", stdout);
    return run(problem14);
}

// 837799 // 0.07s
