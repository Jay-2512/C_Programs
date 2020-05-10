#include<stdio.h>
void sum(int *a, int *b)
{
  printf("Sum = %d \n",*a + *b);
}
void main()
{
  int num1, num2;
  printf("Enter two numbers to find their sum : \n");
  scanf("%d%d", &num1, &num2);
  sum(&num1, &num2);
}
