#include <stdio.h>

int main(void)
{   
    float temp;
    int i = 0, j = 0;

    /*
    *  (a): They are equivalent.
    *   From Pg. 45:
    *   (Incidentally, putting a white-space
    *   character in a format string doesn’t force the input to contain white-space
    *   characters. A white-space character in a format string matches any number of
    *   white-space characters in the input, including none.) 
    */
    
    printf("(a):\n");
    scanf("%d", &i);
    scanf(" %d", &j);
        
    printf("i: %d\n", i);
    printf("j: %d\n", j);

    /*
    *   (b): They are not the same. Use "1 - 2 - 3" as input,
    *   the first scanf returns immediately after storing 1 
    *   into i1 and encountering the first white space, because 
    *   it was looking for "-" instead of white space. The
    *   second scanf would store 1 2 and 3 perfectly with 
    *   the same input.
    */

    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int j1 = 0;
    int j2 = 0;
    int j3 = 0;

    printf("(b):\n");
    printf("Here is a scanf to flush pending input: \n");
    scanf("%f", &temp);
    printf("Flushing completed.\n");
    scanf("%d-%d-%d", &i1, &i2, &i3);
    scanf("%d -%d -%d", &j1, &j2, &j3);
        
    printf("i1: %d, i2: %d, i3: %d\n", i1, i2, i3);
    printf("j1: %d, j2: %d, j3: %d\n", j1, j2, j3);

    /*
    *   (c) They are not the same. The first scanf 
    *   returns after storing the float, but the 
    *   second scanf causes the program to "hang"
    *   until user enter another non white space 
    *   character.
    */

    float x = 0.0f; 
    float y = 0.0f;

    printf("(c):\n");
    printf("Here is a scanf to flush pending input: \n");
    scanf("%f", &temp);
    printf("Flushing completed.\n");
    scanf("%f", &x);
    scanf("%f ", &y);
        
    printf("x %f\n", x);
    printf("y: %f\n", y);

    /*
    *   (d): They are equivalent as the white space is optional.
    */

    float x1 = 0.0f;
    float x2 = 0.0f;
    float y1 = 0.0f;
    float y2 = 0.0f;

    printf("(d):\n");
    printf("Here is a scanf to flush pending input: \n");
    scanf("%f", &temp);
    printf("Flushing completed.\n");
    scanf("%f,%f", &x1, &x2);
    scanf("%f, %f", &y1, &y2);
        
    printf("x1: %f, x2: %f\n", x1, x2);
    printf("y1: %f, y2: %f\n", y1, y2);

    return 0;
}