#include "convert.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

char *convert_c(va_list args) {
    char *result;
    char c = va_arg(args, int);

    result = (char *)malloc(2);
    if (result != NULL) {
        result[0] = c;
        result[1] = '\0';
    }
    return result;
}

char *convert_s(va_list args) {
    char *result;
    char *s = va_arg(args, char *);

    result = (char *)malloc(20);
    if (result != NULL) {
        strcpy(result, s);
    }
    return result;
}

char *convert_percent(va_list args) {
    char *result;

    result = (char *)malloc(2);
    if (result != NULL) {
        result[0] = '%';
        result[1] = '\0';
    }
    return result;
}
char *convert_decimal_integer(va_list args) {
    char *result;
    int value = va_arg(args, int);

    result = (char *)malloc(20);
    if (result != NULL) {
        sprintf(result, "%d", value);
    }
    return result;
}

char *convert_integer(va_list args) {
    return convert_decimal_integer(args);
}
