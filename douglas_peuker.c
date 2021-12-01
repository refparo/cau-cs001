#include <stdio.h>
#include <math.h>

#define SIZE 32

typedef struct {
  int x;
  int y;
  int selected;
} point;

float distance(point a, point b, point p) {
  // (b.y - a.y) * (x - a.x) - (b.x - a.x) * (y - a.y) = 0
  // => (b.y - a.y) * x + (a.x - b.x) * y + b.x * a.y - b.y * a.x = 0
  int A = b.y - a.y;
  int B = a.x - b.x;
  int C = a.y * b.x - a.x * b.y;
  return fabs((A * p.x + B * p.y + C) / sqrt(A * A + B * B));
}

void douglas_peuker(float delta, int len, point arr[]) {
  if (len <= 2) return;
  int farest = 0;
  float farest_dist = 0;
  float dist;
  int i;
  for (i = 1; i < len; i++) {
    dist = distance(arr[0], arr[len - 1], arr[i]);
    if (dist > farest_dist) {
      farest = i;
      farest_dist = dist;
    }
  }
  if (farest_dist > delta) {
    arr[farest].selected = 1;
    douglas_peuker(delta, farest + 1, arr);
    douglas_peuker(delta, len - farest, arr + farest);
  }
}

int main() {
  float delta;
  scanf("%f\n", &delta);
  int len = 0;
  point arr[SIZE];
  do {
    scanf("[%d,%d]", &(arr[len].x), &(arr[len].y));
    arr[len].selected = 0;
    len++;
  } while (getchar() == ',');
  douglas_peuker(delta, len, arr);
  int i;
  printf("[%d,%d]", arr[0].x, arr[0].y);
  for (i = 1; i < len; i++)
    if (arr[i].selected) printf(",[%d,%d]", arr[i].x, arr[i].y);
  printf(",[%d,%d]\n", arr[len - 1].x, arr[len - 1].y);
  return 0;
}
