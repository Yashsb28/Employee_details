#include<stdio.h>
struct employee
{
    char name[25];
    int age;
    int phonenumber;
    int salary;
    int EmpNo;
}emp[100];
 
int main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as EmpNo , name , age , phonenumber , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&emp[i].EmpNo,&emp[i].name,&emp[i].age,&emp[i].phonenumber,&emp[i].salary);
    }
    printf("\nEMP_No\tNAME\tAGE\tPHONE NUMBER\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\n",emp[i].EmpNo,emp[i].name,emp[i].age,emp[i].phonenumber,emp[i].salary);
    }
}
