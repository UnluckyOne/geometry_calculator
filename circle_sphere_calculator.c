//
//  main.c
//  circle_sphere_calculator
//
//  Created by Yanzhe on 2022/7/2.
//

#include <stdio.h>

int main() {
    double num1;
    printf("Please input the radius\n");
    printf("For example:4\n");
    scanf("%lf", &num1);
    printf("The area of your circle is: %.1lf, and the circumference %.1lf\n", num1*num1*3.14, 2*num1*3.14);
    return 0;
}
