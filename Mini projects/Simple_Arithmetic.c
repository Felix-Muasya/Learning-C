// this is the code for a simple arithmetic in C
# include <stdio.h>

int main()
{
    char operation; // I want to use switch case
    double x, y; // Double

    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &operation); // user operation input

    printf("Enter x: \n"); //
    scanf("%lf",&x);
    printf("Enter y: \n");
    scanf("%lf", &y);

    switch(operation)
    {

        case '+': // addition operator
            printf("Addition : %.1lf + %.1lf = %.1lf \n",x,y,x+y);

            break;

        case '-': //subtraction operator
            printf("Subtraction (x-y): %.1lf - %.1lf = %.1lf \n", x, y, x-y);
            printf("Subtraction (y-x): %.1lf - %.1lf = %.1lf \n", x, y, y-x);
            break;

        case '*': // multiplication operator
            printf("Multiplication : %.1lf * %.1lf = %.1lf \n", x, y, x*y);
            break;

        case '/': // dDivision operator
            printf("Division : %.1lf / %.1lf = %.1lf \n", x, y, x/y);
            printf("Division: %.1lf / %.1lf = %.1lf \n", x, y,y/x);
            break;

        default: // just in case
            printf("Something went wrong, kindly review your input \n");

    }

    return 0;

}
