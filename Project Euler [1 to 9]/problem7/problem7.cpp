#include "euler.h"




// 10001st prime
int problem7() {
    int p = 10001;
    int n = p*log(p)*(log(p)+1);
    bool a[n];
    fill_step(&a[3], &a[n], true, 2);
    for (int i = 3; i * i < n; i += 2)
        if (a[i]) fill_step(&a[i*i], &a[n], false, i);
    for (int i = 3; i < n; i += 2) {
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
