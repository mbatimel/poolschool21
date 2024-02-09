#include <math.h>
#include <stdio.h>
float func(float x);

int main() {
  float x;
  int flag = scanf("%f", &x);

  if (flag < 1) {
    printf("n/a\n");
  } else {
    printf("%.1f\n", func(x));
  }
  return 0;
}
float func(float x) {
  return 7e-3 * pow(x, 4) +
         ((22.8 * pow(x, 1 / 3) - 1e3) * x + 3) / (x * x / 2) -
         x * pow((10 + x), (2 / x)) - 1.01;
}
