#include<stdio.h>
void main()
{
  int a[100],i,temp,n,j;
  printf("How many numbers? :->  ");
  scanf("%d", &n);
  printf("Enter the elements into the array : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }

  for(i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
    printf("pass %d: ",i+1);
    for(j=0;j<n;j++)
      printf("%d ", a[j]);
    printf("\n");
  }
  printf("Final Sorted Array: ");
  for(i=0;i<n;i++)
    printf("%d ", a[i]);
}
