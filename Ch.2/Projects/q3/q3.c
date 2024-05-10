#include <stdio.h>

#define PI 3.14159265358979323

int main(void)
{
    float radius;

    printf("Enter the radius(meter): ");
    scanf("%f", &radius);
    printf("Volume of a %f meter sphere: %f\n", radius, 4.0f / 3.0f * PI * (radius * radius * radius));

    return 0;
}