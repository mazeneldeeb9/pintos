#ifndef THREADS_FIX_POINT_H
#define THREADS_FIX_POINT_H

#include <stdint.h>
# define fixed_point 16
#define Delta (1<<fixed_point)                       /* Shift Left. */

struct real
  {
    int val ;
  };

struct real int_to_real(int n);      //convert integer n to fixed point

int real_truncate(struct real x);    //convert fixed point x to integer (rounding towards zero)

int real_round(struct real x);       //convert fixed point x to integer (rounding to nearest)

struct real add_real_real(struct real x, struct real y); // returns real x +  real y

struct real sub_real_real(struct real x, struct real y); // returns real x - real y

struct real add_real_int(struct real x, int n); // returns real x +  int n

struct real sub_real_int(struct real x, int n); // returns real x - int n

struct real mul_real_real(struct real x, struct real y ); // returns real x * real y

struct real mul_real_int(struct real x, int n); // returns real x * int n

struct real div_real_real(struct real x, struct real y); // returns real x /real y

struct real div_real_int(struct real x, int n) ;// returns real x / int n

#endif /* threads/fix-point.h */