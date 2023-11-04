#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

char *liquidpirate(int n) {
    char temp[20];
    char *str = temp;
    int i = 0;
    int is_negative = 0;
    int start, end;

    if (n == 0) {
        temp[i++] = '0';
    } else {
        if (n < 0) {
            is_negative = 1;
            n = -n;
        }

        while (n) {
            temp[i++] = '0' + (n % 10);
            n /= 10;
        }

        if (is_negative) {
            temp[i++] = '-';
        }

        start = 0;
        end = i - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    temp[i] = '\0';
    return str;
}

void write_char(char c) {
    putchar(c);
}

void write_string(const char *s) {
    puts(s);
}

void convert_c(char c) {
    write_char(c);
}

void convert_s(const char *s) {
    write_string(s);
}

void convert_percent(void) {
    write_char('%');
}

void convert_decimal_integer(int n) {
    char *str = liquidpirate(n);
    write_string(str);
}

void convert_integer(int n) {
    convert_decimal_integer(n);
}
