#include<stdio.h>
#include<malloc.h>
int sum_of_arr(int *num, int n)
{
  int sum = 0;
  int i;
  for(i=0;i<n;i++)
  {
    sum = sum + *(num+i);
  }
  return sum;

}
void main()
{
  int n,i;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  int *p = malloc(n * sizeof(int));
  printf("Enter the elements into the array : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d", p+i);
  }
  printf("Sum is %d.\n",sum_of_arr(p,n) );
}
