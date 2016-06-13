#include <stdio.h>

int fibonacci(int n) {
  int a;
  if(n >= 3) {
    a = fibonacci(n - 1) + fibonacci(n - 2);
  } else if(n == 2) {
    a = 1;
  } else if(n == 1) {
    a = 1;
  } else {
    a = 0;
  }
  return a;
}

int main() {
  int n = 11;
  fibonacci(n);
  printf("%d\n", fibonacci(n));
  return 0;
}
