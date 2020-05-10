#include<stdio.h>
void main()
{
  int n,i,search,a[1000];
  printf("How many numbers ? : -> ");
  scanf("%d", &n);
  // Entering values into the array :
  printf("Enter %d numbers into the array : \n", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  // Linear search :
  printf("Enter the value to be searched : ");
  scanf("%d", &search);
  printf("\nSearching...\n");
  for(i=0; i<n; i++)
  {
    if(a[i] == search)
    {
      printf("Element (%d) found at the (%d)th position \n", search,i+1);
      break;
    }
  }
  if(i == n)
  {
    printf("Element (%d) was not found on the array \n", search);
  }
  printf("Search completed\n");
}
