#include <stdio.h>
#include <math.h>

double fx(int, double);

int main(void) {
  int i, i_MAX;
  double x, fourie;
  i_MAX = 50; // フーリエ項数

  FILE *fp;
  fp = fopen("fourier.txt", "w");

  fourie = 0;
  for(x = - 2 * M_PI; x <= 2 * M_PI; x = x + 0.1) {
    for(i = 1; i <= i_MAX; i++) {
      fourie = fourie + fx(i, x);
    }
  printf("fourier(x = %lf) = %lf\n", x, - fourie / M_PI + 0.5);
  fprintf(fp, "%lf %lf\n", x, - fourie / M_PI + 0.5);
  fourie = 0;
  }

  return 0;
}

double fx(int n, double x) {
  return sin(n * x) / n;
}
