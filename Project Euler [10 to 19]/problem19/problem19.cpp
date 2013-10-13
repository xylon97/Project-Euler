#include "euler.h"





bool leap_year(int y) {
    return (y % 400 == 0) ? 1 : (y % 100 == 0) ? 0 : (y % 4 == 0);
}

int days(int m, int y) {
    int a[12] = {31, 28 + leap_year(y), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return a[m];
}

// Counting Sundays
int problem19() {
    int day = 1;
    int c = 0;
    for (int y = 1901; y < 2001; y += 1) {
        for (int m = 0; m < 12; m += 1) {
            day = (days(m, y) + day) % 7;
            if (day == 6) c += 1;
        }
    }
    return c;
}

int main() {
    freopen("problem19.cpp", "a", stdout);
    return run(problem19);
}

// 171 // 0.00s
