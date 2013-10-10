#include "euler.h"




// Lattice paths
long long int problem15() {
    int n = 20;
    long long int a[n+1][n+1];
    int i, j;
    for (i = 0; i <= n; i += 1)
        for (j = 0; j <= n; j += 1) {
            if (i == 0 || j == 0) a[i][j] = 1;
            else a[i][j] = a[i-1][j] + a[i][j-1];
        }
    return a[n][n];
}

int main() {
    freopen("problem15.cpp", "a", stdout);
    return run(problem15);
}

// 137846528820 // 0.00s
