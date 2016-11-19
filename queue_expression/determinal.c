/* 構造体の作成 */
typedefstruct{
  double *val;
  int dim;
} Matrix;

/* マクロ関数 */
#define MXVALUE(m,r,c) ((m)->val[(r)*(m)->dim+(c)])

/*
アロー演算子(->):ポインタを参照する場合に使う
構造体から、ポインタを指定するには、アロー演算子を使う。
*/
Matrix *newMatrix(int dim) {
  Matrix *matrix;
  matrix = (Matrix*)malloc(sizeof(Matrix));
  matrix->dim = dim;
  matrix->val = (double*)malloc(sizeof(double)*dim*dim);
}

int getDeterminant(Matrix *mx) {
  int value;
  int i, r, c;
  Matrix *sub;
  if (mx->dim == 1) {
    value = MXVALUE(mx, 0, 0);
  }
  else {
    value = 0;
    for (i=0; i < mx->dim; i++) {
      sub = newMatrix(mx->dim-1);
      if (sub) {
        for (r=0; r < i; r++) {
          for (c=1; c < mx->dim; c++) {
            MXVALUE(sub,r,c-1) = MXVALUE(mx,r,c);
          }
        }
        for (r=i+1; r < mx->dim; r++) {
          for (c=1; c < mx->dim; c++) {
            MXVALUE(sub,r-1,c-1) = MXVALUE(mx,r,c);
          }
        }
        if (i%2 == 0) {
            value += (MXVALUE(mx, c, 0) * getDeterminant(sub));
        }
        else {
          value -= (MXVALUE(mx, c, 0) * getDeterminant(sub));
        }
      }
      else {
        /*メモリーエラー*/
      }
    }
  }
  return value;
}