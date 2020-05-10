#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
    char name[20],empid[20];
    int salary;
}emp_details;

void main()
{
    int n,i;
    emp_details e,temp;
    FILE *f1 = fopen("emp_details.txt","w+");
    if(f1 == NULL)
    {
      printf("Error: Cannot open file\n");
      exit(1);
    }

    printf("Enter the number of employees : ");
    scanf("%d", &n);
    printf("Enter the Details\n");

    for(i=0;i<n;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Name        : ");
        scanf("%s",e.name);
        printf("Employee id : ");
        scanf("%s",e.empid);
        printf("Salary      : ");
        scanf("%d",&e.salary);
        printf("\n");
        fprintf(f1,"%s %s %d\n",e.name,e.empid,e.salary);

    }
    rewind(f1);

    temp.salary = 0;

    while(fscanf(f1,"%s %s %d\n",e.name,e.empid,&e.salary) != EOF)
    {
        if(e.salary>temp.salary)
            temp = e;

    }
    printf("Employee with highest salary is \n");
    printf("Name        : ");
    printf("%s\n",temp.name);
    printf("\n");

    fclose(f1);
}
