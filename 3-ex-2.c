#include <stdio.h>

int main() {
  int age;
  scanf("%d", &age);
  printf("%c", age < 4 ? 'L' : age == 4 ? 'M' : 'H');
  return 0;
}
