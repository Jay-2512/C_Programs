#include<stdio.h>
#include<stdlib.h>
struct emp
{
  char name[20];
  char emp_id[10];
  int salary;
};
void main()
{
  int n, count = 1, max = 0, a[20], max_loc;
  FILE *file;

  file = fopen("emp_details.txt", "w+");
  if(file == NULL)
  {
    printf("Error in opening file \n");
    exit(1);
  }
  printf("Enter the number of employees : \n");
  scanf("%d", &n);

  struct emp e[n];

  printf("Enter the employee details \n\n");
  for(int i=0; i<n; ++i)
  {
    printf("Enter the |Name| |Emp_ID| |Salary| of Employee %d \n", count);
    scanf("%s %s %d", e[i].name, e[i].emp_id, &e[i].salary);
    fprintf(file, "%s %s %d \n", e[i].name, e[i].emp_id, e[i].salary);
    count++;
  }

  for(int i=0; i<n; i++)
  {
    if(max < e[i].salary)
     max = e[i].salary;
  }



for(int i=0; i<n; i++)
{
  if(max == e[i].salary)
   max_loc = i;
}
  printf("Showing details of Employee with the maximum salary \n");
  printf("|Name|\t|Emp_ID|\t|Salary|\n");
  printf("%s\t%s\t\t%d\n", e[max_loc].name, e[max_loc].emp_id, e[max_loc].salary);

  fclose(file);
}
