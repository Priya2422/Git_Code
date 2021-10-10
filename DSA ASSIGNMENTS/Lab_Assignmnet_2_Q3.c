#include<stdio.h>
#include<stdlib.h>
struct employee{
 int bas_salary,gross_salary;
 char name[20],gender[2],des[10],dep[10];
};
int main(){
    int n,i;
    struct employees *ptr;
    printf("Enter the number of employees: \n");
    scanf("%d",&n);
    struct employee e1[n];
    ptr=(struct employee*)malloc(n * sizeof(struct employee));
    for(i=0;i<n;i++){
    printf("Enter the employee's name:\n");
    scanf("%s",&e1[i].name);
    printf("Enter the employee's gender:\n");
    scanf("%s",&e1[i].gender);
    printf("Enter the employee's designation:\n");
    scanf("%s",&e1[i].des);
    printf("Enter the employee's department:\n");  
    scanf("%s",&e1[i].dep);
    printf("Enter the employee's salary:\n");
    scanf("%d",&e1[i].bas_salary);}
    for(i=0;i<n;i++)
    e1[i].gross_salary=e1[i].bas_salary + (0.25 * e1[i].bas_salary) + (0.75 * e1[i].bas_salary);
    for(i=0;i<n;i++){
 
        printf("Employee's name: %s\n",e1[i].name);
        printf("Employee's gross: %d\n",e1[i].bas_salary);
        printf("Employee's gross: %s\n",e1[i].gender);
        printf("Employee's designation: %s\n",e1[i].des);
        printf("Employee's department: %s\n",e1[i].dep);
        printf("Employee's gross: %d\n",e1[i].gross_salary);
        
    }
}