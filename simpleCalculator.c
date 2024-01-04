#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("What arithmetic operation would you like to perform (+ - * /)?: ");
    scanf("%c", &operator); //always include &address of operator for scanf lines

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch(operator){ //use switches instead of many else-if statements
        case '+':
            result = num1 + num2;
            printf("\nresult: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %.2lf", result);
            break;
        case '*':
            result = num1 + num2;
            printf("\nresult: %.2lf", result);
            break;
        case '/':
            result = num1 + num2;
            printf("\nresult: %.2lf", result);
            break;
        default:
            printf("%c is not a valid input. Please choose from the given options.", operator);
    }
    return 0;

}