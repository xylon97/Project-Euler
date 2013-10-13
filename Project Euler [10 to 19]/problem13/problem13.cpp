#include "euler.h"




// Large sum
long long int problem13() {
    FILE *f = fopen("numbers.txt", "r");
    int sl = 100, nl;
    int sum[sl];
    char num[52];
    int i, j, c, d, n = 100;
    long long int ans;
    fill(&a[0], &a[sl], 0);
    while (n--) {
        fscanf(f, "%s ", num);
        nl = strlen(num), j = sl-1, c = 0;
        for (i = nl-1; i >= 0; i -= 1) {
            d = (num[i]-'0') + sum[j] + c;
            sum[j] = d % 10; c = d/10; j -= 1;
        }
        while (c) {
            d = sum[j] + c;
            sum[j] = d % 10;
            c = d/10; j -= 1;
        }
    }
    i = 0, ans = 0;
    while (sum[i] == 0) i += 1;
    for (j = 0; j < 10; j += 1)
        ans = (ans * 10) + sum[i+j];
    return ans;
}

int main() {
    freopen("problem13.cpp", "a", stdout);
    return run(problem13);
}


// 5537376230 // 0.00s
