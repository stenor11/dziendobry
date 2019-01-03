#include <stdio.h>
#define max 5
void main(void){
  double tab[max][max] = {
    {0.0,0.1,0.2,0.3,0.4},
    {1.0,1.1,1.2,1.3,1.4},
    {2.0,2.1,2.2,2.3,2.4},
    {3.0,3.1,3.2,3.3,3.4},
    {4.0,4.1,4.2,4.3,4.4}
  };
  int i, j;
  for(i = 0; i < max; i++)
    for(j = 0; j < max; j++)
      printf("%.1f%c", tab[i][j], (j == max - 1) ? '\n' : '\t');
}
