#include "euler.h"




// Largest prime factor
int problem3() {
    long long int n =  600851475143LL;
    int i = 3, m = 1;
    while (i * i <= n) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            m = i;
        }
        i += 2;
    }
    return max(m, n);
}

int main() {
    freopen("problem3.cpp", "a", stdout);
    return run(problem3);
}

// 6857 // 0s
