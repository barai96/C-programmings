#include <stdio.h>

int main()
{
  int num, c, result;

  printf("Enter number\n");
  scanf("%d", &num);

  for (c = 31; c >= 0; c--)
  {
    result = num >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
