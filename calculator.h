#ifndef CALCULATOR_H   //check to include .h file onle once
#define CALCULATOR_H

double add (double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

double power(double base, double exp);
double square_root(double x);

double deg_to_rad(double deg);
double sine(double x);
double cosine(double x);
double tangent(double x);

double logarithm(double x);
double logarithm_10(double x);

#endif