#include<stdio.h>
void main()
{
  char a[100],b[100];
  int count_1 = 0, count_2 = 0,i;

  printf("Enter the string 1 ending with a ($) symbol \n");
  scanf("%s", a);
  printf("Enter the string 2 ending with a ($) symbol: \n");
  scanf("%s", b);

  //Length of string 1
  while (a[count_1] != '\0')
   count_1++;
  while (b[count_2] != '\0')
  {
    a[count_1] = b[count_2];
    count_2++;
    count_1++;
  }
  a[count_1] = '\0';

  //printing out concatenated string
  printf("The concatenated string is  :");
  printf("\n%s \n", a);
}
