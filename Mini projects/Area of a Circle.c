// a simple program for calculating the area of a circle
# include <stdio.h>

int main()
{
    char Area; //
    double r; // radius as Double
    const double pi = 3.142;

    printf("Enter the radius (r): \n");
    scanf("%lf", &r); // user input

    printf("The area of a circle with a radius of %.2lf is %.2lf \n", r, pi*r*r);
    printf("The circumference of a circle with a radius of %.2lf is %.2lf \n", r, 2*pi*r);
    printf("The diameter of a circle with a radius of %.2lf is %.2lf \n", r, 2*r);
    return 0;
}

