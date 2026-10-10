Q1.Write a program that demonstrates the order of execution of operators in expressions.


#include <stdio.h>

int main()
{
    int a, b, c;

    a = 10 + 5 * 2;
    b = (10 + 5) * 2;
    c = 20 / 5 * 2;

    printf("10 + 5 * 2 = %d\n", a);
    printf("(10 + 5) * 2 = %d\n", b);
    printf("20 / 5 * 2 = %d\n", c);

    return 0;
}


OUTPUT-
10 + 5 * 2 = 20
(10 + 5) * 2 = 30
20 / 5 * 2 = 8

