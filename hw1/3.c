#include <stdio.h>
#include <math.h>

void solve_quadratic_equation(int, int, int);  // Function prototype

// Ex3. Quadratic equation

int main(void) {
        int a, b, c;
        printf("a = ");     scanf("%d", &a);
        printf("b = ");     scanf("%d", &b);
        printf("c = ");     scanf("%d", &c);

        solve_quadratic_equation(a, b, c);
        return 0;
}

// Write your code below

