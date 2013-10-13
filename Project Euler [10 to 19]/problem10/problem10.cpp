#include "euler.h"




// Summation of primes
long long int problem10() {
    int n = 2000000;
    bool a[n];
    fill_step(&a[3], &a[n], true, 2);
    long long int s = 2;
    for (int i = 3; i * i < n; i += 2)
        if (a[i]) fill_step(&a[i*i], &a[n], false, i);
    for (int i = 3; i < n; i += 2)
        if (a[i]) s += i;
    return s;
}

int main() {
    freopen("problem10.cpp", "a", stdout);
    return run(problem10);
}

// 142913828922 // 0.02s
