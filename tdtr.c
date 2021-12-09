#include <stdio.h>
#include <math.h>

#define SIZE 32

typedef struct {
  int t;
  int x;
  int y;
  int selected;
} point;

double distance(point a, point b, point p) {
  double delta_x = a.x + (double) ((b.x - a.x) * (p.t - a.t)) / (b.t - a.t) - p.x;
  double delta_y = a.y + (double) ((b.y - a.y) * (p.t - a.t)) / (b.t - a.t) - p.y;
  return sqrt(delta_x * delta_x + delta_y * delta_y);
}

void tdtr(double delta, int len, point arr[]) {
  if (len <= 2) return;
  int farest = 0;
  double farest_dist = 0;
  double dist;
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
    tdtr(delta, farest + 1, arr);
    tdtr(delta, len - farest, arr + farest);
  }
}

int main() {
  double delta;
  scanf("%lf\n", &delta);
  int len = 0;
  point arr[SIZE];
  do {
    scanf("[%d,%d,%d]", &(arr[len].t), &(arr[len].x), &(arr[len].y));
    arr[len].selected = 0;
    len++;
  } while (getchar() == ',');
  tdtr(delta, len, arr);
  int i;
  printf("[%d,%d,%d]", arr[0].t, arr[0].x, arr[0].y);
  for (i = 1; i < len; i++)
    if (arr[i].selected) printf(",[%d,%d,%d]", arr[i].t, arr[i].x, arr[i].y);
  printf(",[%d,%d,%d]", arr[len - 1].t, arr[len - 1].x, arr[len - 1].y);
  return 0;
}
