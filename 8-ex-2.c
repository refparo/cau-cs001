#include <stdio.h>

int cptoi(char *c) {
  return *c - '0';
}

int main() {
  char s[14];
  gets(s);
  int id = (cptoi(s)
    + 2 * cptoi(s + 2) + 3 * cptoi(s + 3) + 4 * cptoi(s + 4)
    + 5 * cptoi(s + 6) + 6 * cptoi(s + 7) + 7 * cptoi(s + 8)
    + 8 * cptoi(s + 9) + 9 * cptoi(s + 10)) % 11;
  if (id == 10 && s[12] == 'X' || id == s[12] - '0') printf("Right");
  else {
    s[12] = id == 10 ? 'X' : '0' + id;
    printf("%s", s); 
  }
}
