//StudybarCommentBegin
#include <stdio.h>
#include <string.h>

int numbers(char* str);

#define SIZE 20

int main() {
  char str[SIZE];
  int num;
  //printf("Please input a string.\n");
  //printf("The string can store %d character:", SIZE);
  scanf("%s", str);
  num = numbers(str);
  printf("There are %d numbers in \"%s\"", num, str);
  return 0;
}
//StudybarCommentEnd

int numbers(char* str) {
  int i = 0;
  int count = 0;
  while (str[i] != 0) {
    if (str[i] >= '0' && str[i] <= '9') count++;
    i++;
  }
  return count;
}
