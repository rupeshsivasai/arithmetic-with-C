#include <stdio.h>
#include "division.h"

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
    return (float)a / b;
}
