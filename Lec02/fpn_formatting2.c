#include <stdio.h>

int main() {
    
    float i1 = 0.3;
    double i2 = 0.3;
    
    // Possible to use e/E to represent an exponent
    float j = 1.2345e6;
    float k = 1.2345E-6;
    double pi = 3.141592;

    // Recall the IEEE 754 single precision;
    // When printing float/double type, you see inaccuracy
    printf("float 0.3 = %.30f\n", i1);
    printf("double 0.3 = %.30f\n", i2);
    printf("%f\n", j);
    printf("%.10f\n", k);

    // Use the %lf specifier for printing a double type
    printf("PI = %.6lf\n", pi);
}