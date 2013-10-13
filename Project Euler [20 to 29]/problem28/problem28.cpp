#include "euler.h"




// Number spiral diagonals
long long int problem28() {
    long long int n = 1001;
    return (4*n*n*n + 3*n*n + 8*n - 9)/6;
}

int main() {
    freopen("problem28.cpp", "a", stdout);
    return run(problem28);
}


// 669171001 // 0.00s
