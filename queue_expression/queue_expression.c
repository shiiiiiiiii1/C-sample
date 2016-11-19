#include <stdio.h>

int determinant(int n, int **address) {
  int a;
  if(n >= 3) {
    int a_sub;
    for(int t = 0; t < n; t++) {
      int remainder = t % 2;
      if(remainder == 0) {
        
        a_sub = **address * 
      } else {
        a_sub = -**address[t] * 
      }
      a += a_sub;
    }
    n -= 1;
  } else if(n == 2) {
    a = **address * *(*(address + 1) + 1) - *(*address + 1) * **(address + 1);
  }
  if(n == 1) {
    a = **address;
  }
  return a;
}

int main() {
  const int n = 2;
  int a[n][n] = {
    {1, 3},
    {3, 2}
  };
  
  int *address[n];
  for(int l = 0; l < n; l++) {
    address[l] = a[l];
  }

  determinant(n, address);
  printf("%d\n", determinant(n, address));

  return 0;
}
