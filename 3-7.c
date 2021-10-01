#include <stdio.h>

int main() {
  int score;
  scanf("%d", &score);
  char rank;
  if (score >= 90) rank = 'A';
  else if (score >= 60) rank = 'B';
  else rank = 'C';
  printf("%d belongs to %c.", score, rank);
  return 0;
}
