#include "euler.h"




// Sum square difference
int problem6() {
    int n = 100;
    return n*(n-1)*(n+1)*(3*n+2)/12;
}

int main() {
    freopen("problem6.cpp", "a", stdout);
    return run(problem6);
}

// 25164150 // 0s
