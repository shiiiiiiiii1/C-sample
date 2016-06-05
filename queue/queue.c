#include <stdio.h>

void product(int i, int j, int a[i][j], int b[j][i]) {
  for(int long_t = 0; long_t < i; long_t++) {
    for(int middle_t = 0; middle_t < i; middle_t++) {
      int n = 0;
      for(int short_t = 0; short_t < j; short_t++) {
        n = n + a[long_t][short_t] * b[short_t][middle_t];
      }
      printf("%d ", n);
    }
    printf("\n");
  }
}

int main(void) {
  int a[2][3] = {{3, 5, 2}, {4, 3, 2}};
  int b[3][2] = {{5, 2}, {3, 4}, {1, 9}};

  product(2, 3, a, b);

  return 0;
}
