// Some simple math functions

# include <stdio.h>
# include <math.h>

int main()
{
    float a = 130.33;

    // printing multiple lines with one line

    printf(" %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n %f\n",
           sqrt(a),
           floor(a),
           ceil(a),
           pow(a, 2),
           abs(a),
           acos(a),
           asin(a),
           atan(a),
           cbrt(a),
           cos(a),
           sin(a),
           exp(a),
           tan(a));

    return 0;
}
