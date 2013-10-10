#include "euler.h"




// Highly divisible triangular number
int problem12() {
    int n = 1, tri = 1;
    while (num_of_divisors(tri) < 500) {
        n += 1; tri += n;
    }
    return tri;
}

int main() {
    freopen("problem12.cpp", "a", stdout);
    return run(problem12);
}


// 76576500 // 0.01s
