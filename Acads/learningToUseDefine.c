#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main(void) {

    float radius = 5.6;
    float area = PI * SQUARE(radius);

    printf("Area of circle: %.2f", area);

    return 0;
}