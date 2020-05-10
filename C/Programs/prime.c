#include<stdio.h>
void main()
{
  int n,flag=0;
  JAY:
  printf("Enter a natural number\n");
  scanf("%d", &n);
  while(n < 1)
  {
    printf("Enter a natural number");
    goto JAY;
    break;
  }

  for(int i=2;i<n;++i)
  {
    if(n % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if(n == 1)
    printf("One is neither prime nor composite\n");
  else if(flag == 0)
  printf("%d is a prime number \n", n);
  else
  printf("%d is not a prime number \n", n);

}
