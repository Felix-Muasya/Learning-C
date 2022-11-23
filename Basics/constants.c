#include <stdio.h>
// here i learn arithmetic operators and const;
int main()
{
    const int MinutesPerHour = 60;
    const float Pi = 3.142;
    int result = Pi*MinutesPerHour;

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%d\n", result);
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    return 0;
}
