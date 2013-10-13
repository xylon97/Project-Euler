#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
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
type sum(type *a, type *b) {
    type s = 0;
    while (a != b) {
        s += *a; a += 1;
    }
    return s;
}

template<class type>
void fill_step(type *a, type *b, type v, int s) {
    while (a < b) {
        *a = v; a += s;
    }
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
    int p;
    if (n < 2) return 0;
    for (int i = 0; i < num_of_primes; i += 1) {
        p = primes[i];
        if (n % p == 0) return 0;
        if (p * p > n) return 1;
    }
    return -1;
}

int num_of_divisors(int n) {
    int i, j, k = 1, p;
    for (i = 0; i < num_of_primes; i += 1) {
        p = primes[i];
        for (j = 0; n % p == 0; j += 1) n /= p;
        k *= j + 1;
    }
    return (n > 1) ? 2*k : k;
}

int sum_of_divisors(int n) {
    int i, j, k = 1, p;
    for (i = 0; i < num_of_primes; i += 1) {
        p = primes[i];
        for (j = 1; n % p == 0; j *= p) n /= p;
        k *= (j*p - 1)/(p - 1);
    }
    return (n > 1) ? k*(n+1) : k;
}
