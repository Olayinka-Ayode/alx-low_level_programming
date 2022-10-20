#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c)
{
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= c && b >= a) {
        return b;
    }
    else {
        return c;
    }
}
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif /* MAIN_H */
