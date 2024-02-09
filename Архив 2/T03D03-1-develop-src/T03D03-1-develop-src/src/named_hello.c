#include <stdio.h>
int main() {
  printf("pls Name: ");
  float x;
  int flag = scanf("%f", &x);

  if (flag < 1) {
    return 0;
  } else {
    printf("Hello, %f", x);
  }
  return 0;
}