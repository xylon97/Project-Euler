#include "euler.h"




// 10001st prime
int problem7() {
    int p = 10001;
    int n = p*log(p)*(log(p)+1);
    bool a[n];
    int i, j;
    for (i = 3; i < n; i += 2) a[i] = 1;
    for (i = 3; i * i < n; i += 2)
        if (a[i]) for (j = i * i; j < n; j += i) a[j] = 0;
    for (i = 3; i < n; i += 2) {
        if (a[i]) p -= 1;
        if (p == 1) return i;
    }
    return -1;
}

int main() {
    freopen("problem7.cpp", "a", stdout);
    return run(problem7);
}

// 104743 // 0.00s
