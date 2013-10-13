#include "euler.h"




// Smallest multiple
int problem5() {
    int n = 20;
    int g = 1;
    for (int i = 2; i < n; i += 1)
        g = lcm(g, i);
    return g;
}

int main() {
    freopen("problem5.cpp", "a", stdout);
    return run(problem5);
}

// 232792560 // 0.00s
