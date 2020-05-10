#include<stdio.h>
void main()
{
  int n,a[1000],sum=0,avg=0,i;
  printf("How many numbers ? :-> ");
  scanf("%d", &n);

  //Getting values into array:
  printf("Enter the numbers into the array : \n");
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    sum = sum + a[i];
  }

  // finding sum and average
  
  avg = sum / n;
  printf("Sum = %d\n", sum);
  printf("Average = %d\n", avg);

}
