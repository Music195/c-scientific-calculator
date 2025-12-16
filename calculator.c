#include "calculator.h"
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415926535897
#endif

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
       printf(" The last number MUST NOT be 0!\n");
       return NAN;
    }
    return a / b;
}

double power(double base, double exp) {
    return pow(base, exp);
}

double square_root (double x) {
    if (x < 0) {
        return NAN;
    }
    return sqrt(x);
}

double deg_to_rad(double deg) {
    return deg * M_PI / 180;
}

double sine(double x) {
    return sin(x);
}

double cosine(double x) {
    return cos(x);
}

double tangent(double x) {
    return tan(x);
}

double logarithm(double x) {
    return log(x);
}

double logarithm_10(double x) {
    return log10(x);
}