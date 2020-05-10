#include<stdio.h>
#include<math.h>
int main()
{
  int n, a, x, p, final, count = 0, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &a);
  x = a;
  final = a;
  //
  while(a > 0)
  {
    a /= 10;
    ++count;
  }
  while(x > 0)
  {
    p = x % 10;
    x = x / 10;
    sum = sum + pow(p,count);
  }

  if(sum == final)
  printf("%d is an Armstrong number \n", final);
  else
  printf("%d is not an Armstrong number \n", final);

  return 1;
}
