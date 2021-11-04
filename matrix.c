#include <stdio.h>

#define M 2
#define N 3

// O(m * n)
void scan(int m, int n, float mat[][n]) {
  int i, j;
  for (i = 0; i < m; i++)
  for (j = 0; j < n; j++)
  scanf("%f", &mat[i][j]);
}

// O(m * n)
void print(int m, int n, float mat[][n]) {
  int i, j;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++)
      printf("%.2f ", mat[i][j]);
    printf("\n"); 
  }
}

// O(m * n)
void zero(int m, int n, float mat[][n]) {
  int i, j;
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      mat[i][j] = 0;
}

// O(m * (m + 1))
void identity(int m, float mat[][m]) {
  zero(m, m, mat);
  int i;
  for (i = 0; i < m; i++) mat[i][i] = 1;
}

// O(m * (m + 1) + 2)
void row_switch(int m, float mat[][m], int i, int j) {
  identity(m, mat);
  mat[i][i] = mat[j][j] = 0;
  mat[i][j] = mat[j][i] = 1;
}

// O(m * (m + 1) + 1)
void row_mult(int m, float mat[][m], int i, float k) {
  identity(m, mat);
  mat[i][i] = k;
}

// O(m * (m + 1) + 1)
void row_add(int m, float mat[][m], int j, float k, int i) {
  identity(m, mat);
  mat[i][j] = k;
}

// O(m * n)
void transpose(int m, int n, float src[][n], float dest[][m]) {
  int i, j;
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      dest[j][i] = src[i][j];
}

// O(m * s * n)
void dot(int m, int s, int n, float left[][s], float right[][n], float dest[][n]) {
  int i, j, k;
  float temp;
  for (i = 0; i < m; i++)
    for (k = 0; k < n; k++) {
      temp = 0;
      for (j = 0; j < s; j++) temp += left[i][j] * right[j][k];
      dest[i][k] = temp;
    }
}

int main() {
  float m1[M][N];
  printf("M1 =\n");
  scan(M, N, m1);

  float m2[N][M];
  transpose(M, N, m1, m2);
  printf("M2 = M1^T =\n");
  print(N, M, m2);

  float m3[M][M];
  dot(M, N, M, m1, m2, m3);
  printf("M3 = M1 . M2 =\n");
  print(M, M, m3);

  float m4[M][M];
  row_switch(M, m4, 0, 1);
  printf("M4 = E(1, 2) =\n");
  print(M, M, m4);

  float m5[M][N];
  dot(M, M, N, m4, m1, m5);
  printf("M5 = M4 . M1 =\n");
  print(M, N, m5);

  float m6[N][N];
  row_add(N, m6, 2, 0.5, 1);
  printf("M6 = E(3(0.5), 2) =\n");
  print(N, N, m6);

  float m7[N][M];
  dot(N, N, M, m6, m2, m7);
  printf("M7 = M6 . M2 =\n");
  print(N, M, m7);

  float m8[M][N];
  dot(M, N, N, m1, m6, m8);
  printf("M8 = M1 . M6 =\n");
  print(M, N, m8);
  return 0;
}
