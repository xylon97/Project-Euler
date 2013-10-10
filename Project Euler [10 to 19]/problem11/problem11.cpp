#include "euler.h"




// Largest product in a grid
int problem11() {
    FILE *f = fopen("grid.txt", "r");
    int a[20][20];
    int i, j, m = 0;
    for (i = 0; i < 20; i += 1)
        for (j = 0; j < 20; j += 1)
            fscanf(f, "%d", &a[i][j]);
    for (i = 0; i < 20; i += 1)
        for (j = 0; j < 20; j += 1) {
            if (i > 2) m = max(m, a[i][j] * a[i-1][j] * a[i-2][j] * a[i-3][j]);
            if (j > 2) m = max(m, a[i][j] * a[i][j-1] * a[i][j-2] * a[i][j-3]);
            if (i > 2 && j >  2) m = max(m, a[i][j] * a[i-1][j-1] * a[i-2][j-2] * a[i-3][j-3]);
            if (i > 2 && j < 17) m = max(m, a[i][j] * a[i-1][j+1] * a[i-2][j+2] * a[i-3][j+3]);
        }
    return m;
}

int main() {
    freopen("problem11.cpp", "a", stdout);
    return run(problem11);
}

// 70600674 // 0.00s
