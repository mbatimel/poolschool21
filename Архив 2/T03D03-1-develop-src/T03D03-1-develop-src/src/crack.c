#include <math.h>
#include <stdio.h>

void circle(int a, int b);

int main() {
    float a, b;
    int flag = scanf("%f %f", &a, &b);

    if (flag < 2) {
        printf("n/a\n");
    } else {
        circle(a, b);
    }
    return 0;
}

void circle(int a, int b) {
    if (pow(a, 2) + pow(b, 2) < 25) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
    }
}
