Q1.Write a program to make use of basic I/O functions using different data types.
Ans.
 

#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;
    double salary;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("\n--- Student Information ---\n");
    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);
    printf("Salary = %.2lf\n", salary);

    return 0;
}


OUTPUT-
Enter your age: 18
Enter your marks: 85.5
Enter your grade: A
Enter your salary: 25000

--- Student Information ---
Age = 18
Marks = 85.50
Grade = A
Salary = 25000.00

