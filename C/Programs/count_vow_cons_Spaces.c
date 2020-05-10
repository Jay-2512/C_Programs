#include<stdio.h>
void main()
{
  int i,count_vowels=0,count_space=0,count_consonants=0;
  char a[100];
  printf("Enter the sentence\n");
  fgets(a, sizeof(a), stdin);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
     count_vowels++;
    else if((a[i]>='a'&& a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
     count_consonants++;
    else if(a[i]==' ')
     count_space++;
    else
     continue;
  }
  printf("Total number of vowels entered = %d\n",count_vowels);
  printf("Total number of consonants entered = %d\n",count_consonants);
  printf("Total number of spaces entered = %d\n",count_space);
}
