#include <stdio.h>

const int i = 2;
const int j = 3;

void product(int **pa, int **pb) {
  for(int long_t = 0; long_t < i; long_t++) {
    for(int middle_t = 0; middle_t < i; middle_t++) {
      int n = 0;
      for(int short_t = 0; short_t < j; short_t++) {
        n = n + *(*(pa + long_t) + short_t) * *(*(pb + short_t) + middle_t);
      }
      printf("%d ", n);
    }
    printf("\n");
  }
}

int main(void) {
  int a[i][j] = {{1, 2, 3}, {3, 4, 5}};
  int b[j][i] = {{3, 4}, {2, 1}, {4,2}};

  int *address_a[i];
  int *address_b[j];
  int k, l;
  for(k = 0; k < i; k++) {
    address_a[k] = a[k];
  }

  for(l = 0; l < j; l++) {
    address_b[l] = b[l];
  }

  product(address_a, address_b);

  return 0;
}
