#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdint.h>

#define F 16384 // fraction bits

typedef int fixed_p;

fixed_p convert_int(int n);
int convert_fp_zero(fixed_p n);
int convert_fp_nearest(fixed_p n);

fixed_p add(fixed_p x, fixed_p y);
fixed_p subtract(fixed_p x, fixed_p y);
fixed_p multiply(fixed_p x, fixed_p y);
fixed_p divide(fixed_p x, fixed_p y);

fixed_p add_int(fixed_p x, int y);
fixed_p subtract_int(fixed_p x, int y);
fixed_p multiply_int(fixed_p x, int y);
fixed_p divide_int(fixed_p x, int y);

#endif