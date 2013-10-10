#include "euler.h"




// Summation of primes
long long int problem10() {
    int n = 2000000;
    bool a[n];
    int i, j;
    long long int s = 2;
    for (i = 3; i < n; i += 2) a[i] = 1;
    for (i = 3; i * i < n; i += 2)
        if (a[i]) for (j = i * i; j < n; j += i) a[j] = 0;
    for (i = 3; i < n; i += 2)
        if (a[i]) s += i;
    return s;
}

int main() {
    freopen("problem10.cpp", "a", stdout);
    return run(problem10);
}

// 142913828922 // 0.02s
