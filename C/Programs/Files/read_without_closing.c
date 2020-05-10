#include<stdio.h>
#include<stdlib.h>
void main()
{
  FILE *file;
  char ch;

  file = fopen("read_two.txt", "r");

  if(file == NULL)
  {
    printf("Error opening file\n");
    exit(1);
  }
  printf("Read 1 \n");
  while((ch = fgetc(file)) != EOF)
   printf("%c", ch);

  rewind(file);

  printf("Read 2 \n");

  while((ch = fgetc(file)) != EOF)
   printf("%c", ch);

  fclose(file);
}
