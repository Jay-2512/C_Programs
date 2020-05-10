#include<stdio.h>
void main()
{
  int i,count_vowels=0;
  char a[100];
  printf("Enter the sentence\n");
  fgets(a, sizeof(a), stdin);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
     count_vowels++;
  }
  printf("Number of vowels : %d\n", count_vowels);

}
