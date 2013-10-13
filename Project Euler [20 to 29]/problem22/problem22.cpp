#include "euler.h"





typedef vector<string> vs;


int worth(string a) {
    int s = 0;
    for (int i = 0; i < a.length(); i += 1)
        s += a[i] - 'A' + 1;
    return s;
}

// Names scores
int problem22() {
    FILE *f = fopen("names.txt", "r");
    int n = 0, s = 0;
    char name[100]; vs a;
    while (fscanf(f, "%*[,\"]%[^,\"]s", name) != EOF) {
        a.push_back(name); n += 1;
    }
    sort(&a[0], &a[n]);
    for (int i = 1; i < n; i += 1)
        s += i * worth(a[i]);
    return s;
}

int main() {
    freopen("problem22.cpp", "a", stdout);
    return run(problem22);
}

// 871198282 // 0.01s
