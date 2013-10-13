#include "euler.h"




// Largest product in a series
int problem8() {
    FILE *f = fopen("number.txt", "r");
    char a[1002] = "", b[102];
    while (fscanf(f, "%s ", b) != EOF) strcat(a, b);
    int i, j, p, m = 0;
    for (i = 4; i < strlen(a); i += 1) {
        for (p = 1, j = 0; j < 5; j += 1) p *= a[i-j]-'0';
        if (p > m) m = p;
    }
    return m;
}

int main() {
    freopen("problem8.cpp", "a", stdout);
    return run(problem8);
}

// 40824 // 0.00s
