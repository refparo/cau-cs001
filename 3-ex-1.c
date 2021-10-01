#include <stdio.h>

int main() {
  float watts;
  scanf("%f", &watts);
  float fee = 0;
  fee += watts * 0.53;
  watts -= 240;
  if (watts > 0) fee += watts * 0.05;
  watts -= 160;
  if (watts > 0) fee += watts * 0.25;
  printf("%.2f", fee);
  return 0;
}
