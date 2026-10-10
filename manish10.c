//Q5.Write a program to generate the multiplication table of any number using while loop, do while
//loop and for loop.


#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using for loop
    printf("\nMultiplication table using for loop:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // Using while loop
    printf("\nMultiplication table using while loop:\n");
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    // Using do-while loop
    printf("\nMultiplication table using do-while loop:\n");
    i = 1;
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}



OUTPUT-

Enter a number: 5

Multiplication table using for loop:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

Multiplication table using while loop:
5 x 1 = 5
...
5 x 10 = 50

Multiplication table using do-while loop:
5 x 1 = 5
...
5 x 10 = 50

