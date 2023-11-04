#include "convert.h"
#include <stdio.h>

int main(void) {
    loudpirate_t loudpirate_c = {'c', convert_c};
    loudpirate_t loudpirate_s = {'s', convert_s};
    loudpirate_t loudpirate_percent = {'%', convert_percent};
    loudpirate_t loudpirate_d = {'d', convert_decimal_integer};
    loudpirate_t loudpirate_i = {'i', convert_integer};

    char args_c = 'X';
    char *args_s = "Sample String";
    char args_percent = '%';
    int args_d = 123;
    int args_i = 123;

    char *result_c, *result_s, *result_percent, *result_d, *result_i;

    result_c = loudpirate_c.conversion_function(args_c);
    result_s = loudpirate_s.conversion_function(args_s);
    result_percent = loudpirate_percent.conversion_function(args_percent);
    result_d = loudpirate_d.conversion_function(args_d);
    result_i = loudpirate_i.conversion_function(args_i);

    printf("Result 'c': %s\n", result_c);
    printf("Result 's': %s\n", result_s);
    printf("Result '%%': %s\n", result_percent);
    printf("Result 'd': %s\n", result_d);
    printf("Result 'i': %s\n", result_i);

    free(result_c);
    free(result_s);
    free(result_percent);
    free(result_d);
    free(result_i);

    return 0;
}
