#include <stdio.h>

int max(int a, int b);

int main() {
    float a, b;
    int flag = scanf("%f %f", &a, &b);

    if (a != (int)a || b != (int)b || flag != 2) {
        printf("n/a\n");
    } else {
        printf("%d\n", max(a, b));
    }
    return 0;
}

int max(int a, int b) {
    if (a < b) {
        return b;
    } else if (a > b) {
        return a;
    } else {
        return a;
    }
}
