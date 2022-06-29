//
//  main.c
//  square_calculator
//
//  Created by Yanzhe on 2022/6/29.
//

#include <stdio.h>

int main() {
    double num1;
    printf("Hello, please input the length of your side.\n");
    scanf("%lf",&num1);
    printf("The parameter of your square is: %.1lf\n", num1*4);
    printf("The area of your square is: %.1lf\n", num1*num1);
    return 0;
}
