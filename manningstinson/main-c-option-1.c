#include "main.h"
#include "convert.h"
#include "putchar.h"  // Include the header for putchar

int main() {
    loudpirate_t loudpirate_c = {'c', convert_c};
    loudpirate_t loudpirate_s = {'s', convert_s};
    loudpirate_t loudpirate_percent = {'%', convert_percent};
    loudpirate_t loudpirate_d = {'d', convert_decimal_integer};
    loudpirate_t loudpirate_i = {'i', convert_decimal_integer};

    // Example usage
    char *result_c, *result_s, *result_percent, *result_d, *result_i;

    result_c = loudpirate_c.conversion_function();
    result_s = loudpirate_s.conversion_function();
    result_percent = loudpirate_percent.conversion_function();
    result_d = loudpirate_d.conversion_function();
    result_i = loudpirate_i.conversion_function();

    // Using puts and putchar to print characters
    puts("Result 'c':");

    int i;
    for (i = 0; result_c[i] != '\0'; i++) {
        putchar(result_c[i]);
    }
    putchar('\n');

    puts("Result 's':");

    for (i = 0; result_s[i] != '\0'; i++) {
        putchar(result_s[i]);
    }
    putchar('\n');

    puts("Result '%%':");

    for (i = 0; result_percent[i] != '\0'; i++) {
        putchar(result_percent[i]);
    }
    putchar('\n');

    puts("Result 'd':");

    for (i = 0; result_d[i] != '\0'; i++) {
        putchar(result_d[i]);
    }
    putchar('\n');

    puts("Result 'i':");

    for (i = 0; result_i[i] != '\0'; i++) {
        putchar(result_i[i]);
    }
    putchar('\n');

    free(result_c);
    free(result_s);
    free(result_percent);
    free(result_d);
    free(result_i);

    return 0;
}
