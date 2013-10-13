#include "euler.h"





// Largest palindrome product
int problem4() {
    int m = 0;
    for (int i = 900; i <= 999; i += 1)
        for (int j = i + 1; j <= 999; j += 1)
            if (is_palindrome(i*j) && i*j > m) m = i*j;
    return m;
}

int main() {
    freopen("problem4.cpp", "a", stdout);
    return run(problem4);
}

// 906609 // 0.00s
