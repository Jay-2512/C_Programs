#include<stdio.h>
#include<malloc.h>
void main()
{
  int i,n,j;
  int *p = malloc(30 * sizeof(int));
  int *q = malloc(30 * sizeof(int));
  printf("Enter the Array size : \n");
  scanf("%d", &n);
  printf("Enter the array elements : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d", p+i);
  }
  printf("Array before reversing : \n");
  for(i=0;i<n;i++)
  {
    printf("%d\t", *(p+i));
  }
  for(i = n - 1, j = 0; i >=0; i--,j++)
  {
    *(q+j) = *(p + i);
  }

  printf("\nReversed array :-> ");
  for(j=0;j<n;j++)
  {
    printf("%d \t", *(q + j));
  }
  printf("\n");
}
