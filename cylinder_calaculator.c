//
//  main.c
//  cylinder_calculator
//
//  Created by Yanzhe on 2022/7/2.
//

#include <stdio.h>

int main() {
    double num1;
    double num2;
    printf("Please imput the radius and height of your cylinder\n");
    printf("For example: 1,2\n");
    scanf("%lf,%lf", &num1,&num2);
    double num3;
    num3 = num1*2;
    printf("The surface area of your cylinder is: %.1lf, the volume of the cylinder is: %.1lf, the perimeter of a cylinder %.1lf.\n", 2*3.14*num1*num2+(2*3.14*num1*num1), 3.14*num1*num1*num2, 2*(2*num1+num2));
    return 0;
}
