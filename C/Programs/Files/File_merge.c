#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n=1;
  char content;

  FILE *file_1, *file_2, *file_3; // declaring file pointers

  file_1 = fopen("file1.txt","r"); // opening file1.txt in read format
  file_2 = fopen("file2.txt","r"); // opening file2.txt in read format
  file_3 = fopen("file3.txt","w"); // openig file3.txt in write format

  if(file_1 == NULL || file_2 == NULL || file_3 == NULL) // checking if file opened suucesfully.
  {
    printf("ERROR: Can't Open File\n"); // Error message (Did this because, If there is any error in opening a file C wont display any error.) that is why we print error msg
    exit(1);
  }
  else
   printf("Merging Files to a new file\n"); // Merging message

  while(n) // loop(Made this an infinite loop because we dont know how many contents are there in the file)
  {
    content = fgetc(file_1);
    if(content == EOF) // End Of File.(Actually we made it a final loop with this line)
     break;
    fputc(content,file_3); // code for cpoying contents
  }
  fclose(file_1);//closing file1
  while(n) // second loop to copy files from file 2
  {
    content = fgetc(file_2);
    if(content == EOF)
     break;
    fputc(content,file_3);
  }
  fclose(file_2); //closing file2
  printf("Done merging!\n");

}
