Q4.Write a program using the switch-case statement to create a menu-driven calculator that repeatedly
performs arithmetic operations until the user exits the program.




#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n--- MENU-DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice)
        {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Exiting the calculator.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}


OUTPUT-
--- MENU-DRIVEN CALCULATOR ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 1
Enter two numbers: 10 5
Result = 15.00

--- MENU-DRIVEN CALCULATOR ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 3
Enter two numbers: 4 5
Result = 20.00

--- MENU-DRIVEN CALCULATOR ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 5
Exiting the calculator.

