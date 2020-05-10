#include<stdio.h>
#include<stdlib.h>
void main()
{

  int vowel_count = 0;
  char ch, filename[100];
  printf("Enter the file name : \n");
  scanf("%s", filename);

  FILE *file;

  file = fopen(filename, "r");

  if(file == NULL)
  {
    printf("Error opening file \n");
    exit(1);
  }

  while((ch = fgetc(file)) != EOF)
  {
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
     vowel_count++;
  }

  printf("Number of vowels in the file = %d\n", vowel_count);
}
