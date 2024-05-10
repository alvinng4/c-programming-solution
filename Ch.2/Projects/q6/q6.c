#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);
    float value = -6
        + x * 
            (7 + x * 
                (
                    -1 + x * 
                    (
                        -5 + x *
                        (
                            2 + 3 * x
                        )
                    )
                )
            );
    printf("%f", value);

    return 0;
}