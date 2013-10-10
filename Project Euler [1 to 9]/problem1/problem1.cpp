#include "euler.h"




// Multiples of 3 and 5
int problem1() {
    int i, s = 0;
    for (i = 0; i < 1000; i += 1)
        if (i % 3 == 0 || i % 5 == 0) s += i;
    return s;
}

int main() {
    freopen("problem1.cpp", "a", stdout);
    return run(problem1);
}

// 233168 // 0s
