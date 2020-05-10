#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n=1;
  char content;

  FILE *file_1, *file_2; // declaring file pointers

  file_1 = fopen("file1.txt","r"); // opening file1.txt in read format
  file_2 = fopen("file2.txt","w"); // opening file2.txt in write format

  if(file_1 == NULL || file_2 == NULL) // checking if file opened suucesfully.
  {
    printf("ERROR: Can't Open File\n"); // Error message (Did this because, If there is any error in opening a file C wont display any error.) that is why we print error msg
    exit(1);
  }
  else
   printf("Copying contents\n"); // copying message

  while(n) // loop(Made this an infinite loop because we dont know how many contents are there in the file)
  {
    content = fgetc(file_1);
    if(content == EOF) // End Of File.(Actually we made it a final loop with this line)
     break;
    fputc(content,file_2); // code for cpoying contents
  }
}
