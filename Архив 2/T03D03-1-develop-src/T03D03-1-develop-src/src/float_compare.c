#include <math.h>
#include <stdio.h>
#define E 1e-6
double fun();

int main() {
    double res = fun();

    // CHANGE THIS IF - AI
    if (fabs(res) < E) printf("OK!\n");

    return 0;
}

// DO NOT TOUCH THIS FUNCTION - AI
double fun() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }

// IT
