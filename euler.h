#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include "primes.h"




using namespace std;



template<class type>
int run(type (*fn)()) {
    float t1 = clock();
    type ans = fn();
    float t2 = clock();
    float t = (t2 - t1)/CLOCKS_PER_SEC;
    cout << "// " << ans << " // " << fixed;
    cout << setprecision(2) << t << "s\n";
    return 0;
}

template<class type>
type rev(type n) {
    type r = 0;
    while (n != 0) {
        r = (r * 10) + (n % 10);
        n /= 10;
    }
    return r;
}

template<class type>
bool is_palindrome(type n) {
    return rev(n) == n;
}

template<class type>
type gcd(type a, type b) {
    int c;
    while (b != 0) {
        c = a; a = b;
        b = c % b;
    }
    return a;
}

template<class type>
type lcm(type a, type b) {
    return (a * b)/gcd(a, b);
}

bool is_prime(int n) {
    int i;
    for (i = 0; i < num_of_primes && p[i] * p[i] <= n; i += 1)
        if (n % p[i] == 0) return 0;
    return 1;
}

int num_of_divisors(int n) {
    int i, j, k = 1;
    for (i = 0; i < num_of_primes && p[i] * p[i] <= n; i += 1) {
        for (j = 0; n % p[i] == 0; j += 1) n /= p[i];
        k *= j + 1;
    }
    return (n > 1) ? 2*k : k;
}

int sum_of_divisors(int n) {
    int i, j, k = 1;
    for (i = 0; i < num_of_primes && p[i] * p[i] <= n; i += 1) {
        for (j = 1; n % p[i] == 0; j *= p[i]) n /= p[i];
        k *= (j*p[i] - 1)/(p[i] - 1);
    }
    return (n > 1) ? k*(n+1) : k;
}
