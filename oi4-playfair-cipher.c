#include <stdio.h>

#define SIZE 32

void passwd_in(char passwd[]) {
  int i, j;
  for (i = 0; (passwd[i] = (char) getchar()) != '\n'; i++) {
    if (passwd[i] == 'j') {
      i--;
      continue;
    }
    for (j = 0; j < i; j++)
      if (passwd[j] == passwd[i]) {
        i--;
        break;
      }
  }
  int len = i;
  char c;
  for (c = 'a'; c <= 'z'; c++) {
    for (j = 0; j < len; j++)
      if (c == passwd[j]) break;
    if (j != len) continue;
    if (c == 'j') continue;
    passwd[i] = c;
    i++;
  }
  passwd[i] = 0;
}

int plaintext_in(char plaintext[]) {
  int i;
  for (i = 0; (plaintext[i] = (char) getchar()) != '\n'; i++) {
    if (i % 2 == 1 && plaintext[i] == plaintext[i - 1]) {
      plaintext[i + 1] = plaintext[i];
      plaintext[i] = 'x';
      i++;
    }
    if (plaintext[i] == 'j') plaintext[i] = 'i';
  }
  if (i % 2 == 1) {
    plaintext[i] = 'x';
    i++;
  }
  plaintext[i] = 0;
  return i;
}

int find(char str[], char c) {
  int i = -1;
  do i++; while (str[i] != c);
  return i;
}

void playfair_pair(char passwd[], char plaintext[], char ciphertext[]) {
  int p1 = find(passwd, plaintext[0]), x1 = p1 % 5, y1 = p1 / 5;
  int p2 = find(passwd, plaintext[1]), x2 = p2 % 5, y2 = p2 / 5;
  if (y1 == y2) {
    ciphertext[0] = passwd[(p1 + 1) % 25];
    ciphertext[1] = passwd[(p2 + 1) % 25];
  } else if (x1 == x2) {
    ciphertext[0] = passwd[(p1 + 5) % 25];
    ciphertext[1] = passwd[(p2 + 5) % 25];
  } else {
    ciphertext[0] = passwd[y1 * 5 + x2];
    ciphertext[1] = passwd[y2 * 5 + x1];
  }
}

void playfair(char passwd[], char plaintext[], char ciphertext[]) {
  int i;
  for (i = 0; plaintext[i] != 0; i += 2)
    playfair_pair(passwd, plaintext + i, ciphertext + i);
}

int main() {
  char passwd[26] = {0};
  passwd_in(passwd);
  char plaintext[SIZE + 1] = {0};
  plaintext_in(plaintext);
  char ciphertext[SIZE + 1] = {0};
  playfair(passwd, plaintext, ciphertext);
  printf("%s", ciphertext);
  return 0;
}
