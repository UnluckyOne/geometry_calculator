//
//  main.c
//  rectangle_calculator
//
//  Created by Yanzhe on 2022/6/29.
//

#include <stdio.h>

int main() {
    double num1;
    double num2;
    printf("Hello, please input the width and length of your rectangle.\n");
    printf("For example: 5,18\n");
    scanf("%lf,%lf",&num1, &num2);
    printf("The parameter of your rectangle is: %.1lf\n", (num1+num2)*2);
    printf("The area of your rectangle is: %.1lf\n", num1*num2);
    return 0;
}
