/*
BOJ 10991 별찍기
*/
#include <stdio.h>

int main() {
  int n, i, j;
  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    for(j = n - i; j >= 1; j--) {
      printf(" ");
    }
    for(j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}