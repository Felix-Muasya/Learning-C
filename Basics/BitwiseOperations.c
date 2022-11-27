// Program for bitwise operators and general operators

#include <stdio.h>

int main()
{
    int a =60 , b = 30;

    printf(" if a=10 and b=30 then: \n"); // general statement
    printf(" +  for a, b is: %d \n", a+b); // addition
    printf(" - for a, b is: %d \n", a-b); // difference or minus
    printf(" * for a, b is: %d \n", a*b); // multiply
    printf(" / for a, b is: %d \n", a/=b); // divide
    printf(" %= for a, b is: %d \n", a%b); // modulus, check for remainder
    printf(" & for a, b is: %d \n", a&b); // bitwise AND operator
    printf(" | for a, b is: %d \n", a|b); // bitwise OR operator
    printf(" ^ for a, b is: %d \n", a^b); // bitwise XOR operator
    printf("~ for a is: %d \n", ~a); // bitwise compliment
    printf("~ for b is: %d \n", ~b); // bitwise compliment
    printf(" >> for a, b is: %d \n", a>>b ); // bitwise shift right operator
    printf(" << for a, b is: %d \n", a<<b ); // bitwise  shift left operator

    return 0;

}
