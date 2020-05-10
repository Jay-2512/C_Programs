#include<stdio.h>
#include<malloc.h>
void main()
{
  int m,n,i,j,x,temp;
  printf("Enter the number of elements of first array : \n");
  scanf("%d", &n);
  int *p = malloc(n * sizeof(int));
  printf("Enter the elements into array 1 : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d", p+i);
  }
  printf("Enter the number of elements of Second array : \n");
  scanf("%d", &m);
  int *q = malloc(n * sizeof(int));
  printf("Enter the elements into array 2 : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d", q+i);
  }
  for(j=0;j<n;j++)
  {
    *(p+m+j) = *(q+j);
  }
  x = m+n;
  printf("\nThe merged array is : \n");
  for(i=0;i<x;i++)
  {
    printf("%d ", *(p+i));
  }
  // Sorting :


  for(i=1;i<x;i++)
  {
    for(j=0;j<x-i;j++)
    {
      if(*(p+j) > *(p+j+1))
      {
        temp = *(p+j);
        *(p+j) = *(p+j+1);
        *(p+j+1) = temp;
      }
    }
  }
  printf("\nThe Sorted array : ");
  for(i=0;i<x;i++)
  {
    printf("%d ", *(p+i));
  }

}
