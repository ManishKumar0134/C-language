Q2.Write a program to calculate the area of a circle.

-
#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}


OUTPUT-

Enter the radius of the circle: 5
Area of the circle = 78.50

