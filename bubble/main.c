#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
  int arr[100], n, buff;

  printf("¬ведите размер массива:\n");
  scanf("%d", &n);

  printf("¬ведите %d элемент массива\n", n);

  for (int c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  for (int c = 0 ; c < n - 1; c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        buff     = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = buff;
      }
    }
  }

  printf("ќтсортированный массив:\n");

  for (int c = 0; c < n; c++)
     printf("%d\n", arr[c]);

  return 0;
}
