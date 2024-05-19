#include <stdio.h>
#include <stdint.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void)
{
    printf("Int8: %zu bits\n", sizeof(Int8) * 8);
    printf("Int16: %zu bits\n", sizeof(Int16) * 8);
    printf("Int32: %zu bits\n", sizeof(Int32) * 8);
}