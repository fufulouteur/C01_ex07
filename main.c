#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);

int main(void)
{
  int a[4];
  a[0] = 0;
  a[1] = 1;
  a[2] = 2;
  a[3] = 3;
  ft_rev_int_tab(NULL, 4);
  printf("%i\n", a[0]);
  printf("%i\n", a[1]);
  printf("%i\n", a[2]);
  printf("%i\n", a[3]);
  return 0;
}
