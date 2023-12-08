/** math.h standard header 
 **
 ** acos: arc cosine function
 ** asin: arc sine function
 ** atan: arc tangent function
 ** atan2:arc tanget 2 function for difference modes 
 ** cosh: cosine hyperbolic
 ** fabs: function of absolute value 
 ** fmod: function of modulus (Calculate Floating-Point Remainder) 
 ** frexp: fraction exponent(or manitissa)
 ** ldexp: long double exponent (it is a inverse function of frexp)
 ** modf:  breaks down the floating-point value x into fractional and integral parts.
 ** sinh: sine hyperbolic 
 ** tanh: tangent hyperbolic
 ** _Log: Use _Dunscale function (in the book) remoe exponent 3=e, and save fraction f
 ** _Asin: if goff is  0, calculate sin(x), if goff is 1, calculate cos(x); 
 ** _Atan: called only by both atan and atan2 functions
 **
 ** https://www.ibm.com/docs/en/i/7.3?topic=functions-modf-separate-floating-point-value
 **/

#ifndef _MATH
#define _MATH
// macros
#define HUGE_VAL    _Hugeval._D

// type definitions
typedef const union {
    unsigned short _W[4];
    double _D;
} _Dconst;

// declarations
double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double ceil(double);
double cos(double);
double cosh(double);
double exp(double);
double fabs(double);
double floor(double);
double fmod(double, double);
double frexp(double, int *);
double ldexp(double, int);
double log(double);
double log10(double);
double modf(double, double *);
double pow(double, double);
double sin(double);
double sinh(double);
double sqrt(double);
double tan(double);
double tanh(double);
double _Asin(double, int);
double _Log(double, int);
double _Sin(double, unsigned int);
extern _Dconst _Hugeval;

// macro overrides
#define acos(x) _Asin(x, 1)
#define asin(x) _Asin(x, 0)
#define cos(x)  _Sin(x, 1)
#define log(x)  _Log(x, 0)
#define log10(x)    _Log(x, 1)
#define sin(x)  _Sin(x, 0)
#endif