#include "euler.h"




// Maximum path sum I
int problem18() {
    FILE *f = fopen("triangle.txt", "r");
    int a[15][15];
    int i, j, m = 0;
    for (i = 0; i < 15; i += 1)
        for (j = 0; j <= i; j += 1)
            fscanf(f, "%d", &a[i][j]);
    for (i = 1; i < 15; i += 1)
        for (j = 0; j <= i ; j += 1) {
            if (j == 0) a[i][j] += a[i-1][j];
            else if (j == i) a[i][j] += a[i-1][j-1];
            else a[i][j] += max(a[i-1][j-1], a[i-1][j]);
            m = max(a[i][j], m);
        }
    return m;
}

int main() {
    freopen("problem18.cpp", "a", stdout);
    return run(problem18);
}

// 1074 // 0.00s
