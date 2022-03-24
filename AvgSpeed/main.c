#include <stdio.h>
#include <stdlib.h>

#define formulaRapm (d / deltaT)
#define formulaDeltaT (t_2 - t_1)

int main() {
  unsigned int d;
  unsigned int t_1;
  unsigned int t_2;
  printf("Enter the total distance traveled here: \n");
  scanf("%u", &d);
  printf("Insert here t_1: \n");
  scanf("%u", &t_1);
  printf("Insert here t_2: \n");
  scanf("%u", &t_2);
  if (t_1 > t_2) {
    puts("t_1 cannot be bigger than t_2");
    exit(1);
  }
  printf("\n∆T = %u\n", formulaDeltaT);
  unsigned int deltaT = formulaDeltaT;
  printf("\n\nAverage Speed: %u", formulaRapm);

  return EXIT_SUCCESS;
}
