#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *f1;

  fopen("employee_details.txt","r");

  if(f1 == NULL)
  {
    printf("Error : Can't open file\n");
    break;
  }

}
