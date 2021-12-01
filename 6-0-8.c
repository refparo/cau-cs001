//StudybarCommentBegin
#include<stdio.h>

int main() {
  double equation(double x, int n);
  int n;
  double x;
  scanf("%lf%d", &x, &n);
  printf("%.4f\n", equation(x, n));
  return 0;
}
//StudybarCommentEnd

int fact(int n) {
  if (n <= 1) return 1;
  else return n * fact(n - 1);
}

double mypow(double x, int n) {
  if (n < 0) return 1 / mypow(x, -n);
  else if (n == 0) return 1;
  else return x * mypow(x, n - 1);
}

double equation(double x, int n) {
  double res = 0;
  int i;
  for (i = 1; i <= n; i++)
    res += ((i % 2) * 2 - 1) * (mypow(x, i) / fact(i));
  return res;
}
