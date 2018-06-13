#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fx(int, double);

int main(void) {
  int i, i_MAX, n;
  double x;
  i_MAX = 50;

  for(i = 1; i <= i_MAX; i++) {
    printf("%lf\n", fx(n, x));
    for()
  }
  return 0;
}

double fx(int n, double x) {
  return - sin(n * x) / M_PI;
}

// 参考URL
// フーリエ展開とは https://mathtrain.jp/fourierseries

/*
int main(void) {
  int n, i;
  double x, ans, tmp;

  printf("項数n を入力してください。\n");
  scanf("%d", &n);
  printf("角度x を入力してください。\n");
  scanf("%lf", &x);

  ans = 1;
  tmp = 1;
  for(i = 1; i < n; i++) {
    tmp = tmp * (-1) * degreeToRadian(x) * degreeToRadian(x) / ((2.0 * i - 1.0) * (2.0 * i));
    ans = ans + tmp;
  }
  printf("cos(%f°) のマクローリン展開第%d項までの和は %f\n", x, n, ans);
  return 0;
}

// 角度(degree)からラジアン(radian)に変換する関数
double degreeToRadian(double degree) {
  double radian, pi;
  pi = 3.141592653589793;
  radian = degree * pi / 180.0;
  return radian;
}
