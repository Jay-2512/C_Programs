#include<stdio.h>
#include<string.h> 

void main()
{
  int length = 0, flag;
  char a[100];
  printf("Enter the string \n");
  scanf("%s", a);
  length = strlen(a);
  for(int i=0;i<length;i++)
  {
    if(a[i] != a[length-i-1])
     flag = 0;
    else
     flag = 1;
  }
  if(flag == 1)
  {
    printf("Entered string is a palindorme \n");
  }
  else
  {
    printf("Entered string is not a palindorme \n");
  }
}
