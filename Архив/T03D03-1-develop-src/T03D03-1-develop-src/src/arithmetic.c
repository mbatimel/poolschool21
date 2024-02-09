#include <stdio.h>

int sum(int a, int b);
int mins(int a, int b);
int div(int a, int b);
int mul(int a, int b);

int main() {
  float a, b;
  int flag = scanf("%f %f", &a, &b);
  if (a != (int)a || b != (int)b || flag < 2) {
    printf("n/a\n");
  } else {
    if (b == 0) {
      printf("%d %d %d n/a\n", sum(a, b), mins(a, b), mul(a, b));
    } else {
      printf("%d %d %d %d\n", sum(a, b), mins(a, b), mul(a, b), div(a, b));
    }
  }
  return 0;
}

int sum(int a, int b) { return a + b; }
int mins(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
