#include <stdio.h>
void ft_swap(int *a, int *b);

void ft_rev_int_tab(int *tab, int size)
{
  if(tab == NULL)
    return;
  //create a integer pointer
  int *start_front_to_half, *start_back_to_half;
  //copy tab value
  start_front_to_half = tab;
  start_back_to_half = tab;
  //start_back_to_half start to back 
  start_back_to_half+=size -1;
  while(start_front_to_half < start_back_to_half)
  {
    ft_swap(start_front_to_half, start_back_to_half);
    start_front_to_half++;
    start_back_to_half--;
  }
}
