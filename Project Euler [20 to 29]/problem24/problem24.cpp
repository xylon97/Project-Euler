#include "euler.h"





int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

// Lexicographic permutations
string problem24() {
    char a[12] = "0123456789";
    int n = 1000000;
    char ans[12];
    int i, j, k, l = strlen(a);
    float f;
    for (i = 0; i < l; i += 1) {
        f = fact[l-i-1];
        k = ceilf(n/f) - 1;
        ans[i] = a[k];
        for (j = k; j < l; j += 1) a[j] = a[j+1];
        n -= f * k;
    }
    ans[i] = '\0';
    return ans;
}

int main() {
    freopen("problem24.cpp", "a", stdout);
    return run(problem24);
}

// 2783915460 // 0.00s
