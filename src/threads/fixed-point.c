#include "fixed-point.h"

// Conversions
fixed_p convert_int(int n){
    return n * F;
}

int convert_fp_zero(fixed_p n){
    return n / F;
}

int convert_fp_nearest(fixed_p n){
    if(n >= 0){ // positive case
        n = n + (F / 2);
    }
    else{ // negative case
        n = n - (F / 2);
    }
    return n / F;
}

// Fixed-point arithmetic
fixed_p add(fixed_p x, fixed_p y){
    return x + y;
}

fixed_p subtract(fixed_p x, fixed_p y){
    return x - y;
}

fixed_p multiply(fixed_p x, fixed_p y){
    return ((int64_t)x * y) / F;
}

fixed_p divide(fixed_p x, fixed_p y){
    return ((int64_t)x * F) / y;
}

// Fixed-point & integer arithmetic
fixed_p add_int(fixed_p x, int y){
    return x + (y * F);
}

fixed_p subtract_int(fixed_p x, int y){
    return x - (y * F);
}

fixed_p multiply_int(fixed_p x, int y){
    return x * y;
}

fixed_p divide_int(fixed_p x, int y){
    return x / y;
}