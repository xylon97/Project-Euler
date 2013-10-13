#include "euler.h"





enum {
    AND = 3,
    HUNDRED = 7,
};


int letters(int n) {
    switch (n) {
        case  0:                                                return  0;
        case  1: case  2: case  6: case 10:                     return  3;
        case  4: case  5: case  9:                              return  4;
        case  3: case  7: case  8: case 40: case 50: case 60:   return  5;
        case 11: case 12: case 20: case 30: case 80: case 90:   return  6;
        case 15: case 16: case 70:                              return  7;
        case 13: case 14: case 18: case 19:                     return  8;
        case 17:                                                return  9;
        case 1000:                                              return 11;
    }
    if (n < 100) return letters(n/10*10) + letters(n % 10);
    if (n % 100 == 0) return letters(n/100) + HUNDRED;
    return letters(n/100) + HUNDRED + AND + letters(n % 100);
}

// Number letter counts
int problem17() {
    int n = 1000;
    int s = 0;
    for (int i = 1; i <= n; i += 1)
        s += letters(i);
    return s;
}

int main() {
    freopen("problem17.cpp", "a", stdout);
    return run(problem17);
}


// 21124 // 0.00s
