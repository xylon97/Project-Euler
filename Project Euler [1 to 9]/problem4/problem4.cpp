#include "euler.h"





// Largest palindrome product
int problem4() {
    int i, j, m = 0;
    for (i = 900; i <= 999; i += 1)
        for (j = i + 1; j <= 999; j += 1)
            if (is_palindrome(i*j)) m = max(m, i*j);
    return m;
}

int main() {
    freopen("problem4.cpp", "a", stdout);
    return run(problem4);
}

// 906609 // 0s
