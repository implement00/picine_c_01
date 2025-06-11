#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int *a, int *b) {
  int holder;
  
  holder = (*a / *b);
  *b = (*a % *b);
  *a = holder;
}

int main(void) {
  int a;
  int b;

  a = 10;
  b = 3;
  
  ft_div_mod(&a, &b);
  printf("%d %d ", a, b);
  return 0;
}