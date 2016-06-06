#include <stdio.h>

int main(void) {
  const int i = 2;
  const int j = 3;
  int pa[i][j] = {{1, 2, 3}, {3, 4, 5}};
  int pb[j][i] = {{3, 4}, {2, 1}, {4,2}};

  for(int long_t = 0; long_t < i; long_t++) {
    for(int middle_t = 0; middle_t < i; middle_t++) {
      int n = 0;
      for(int short_t = 0; short_t < j; short_t++) {
        n = n + *(&(pa[long_t]) + short_t) * *(&(pb[short_t]) + middle_t);
        printf("n:%d\n", n);
      }
      printf("%d ", n);
    }
    printf("\n");
  }

  return 0;
}
