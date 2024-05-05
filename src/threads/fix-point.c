#include "threads/fix-point.h"
#include <stdio.h>


struct real
int_to_real(int n)
{
  struct real result;
  result.val = n * Delta;
  return result;
}

int
real_truncate(struct real x)
{
    return (x.val / Delta);
}

int
real_round(struct real x)
{
    x.val=(x.val)>>(fixed_point -1);
    if(((x.val)%2)==1)
        return (x.val>>1)+1 ;
    else
        return (x.val>>1);

}

struct real
add_real_real(struct real x, struct real y)
{
    struct real result ;
    result.val= x.val+y.val;
    return result;
}

struct real
sub_real_real(struct real x, struct real y)
{
    struct real result ;    
    result.val= x.val-y.val;
    return result;
}

struct real
add_real_int(struct real x, int n)
{
    struct real result ;
    result.val= x.val+(n * Delta);
    return result;
}

struct real
sub_real_int(struct real x, int n)
{
    struct real result ;
    result.val= x.val-(n * Delta);
    return result;

}

struct real
mul_real_real(struct real x, struct real y )
{
    struct real result ;
    result.val= (((int64_t)x.val)*y.val)/Delta;
    return result;
}

struct real
mul_real_int(struct real x, int n)
{
    struct real result ;
    result.val= (x.val) *n;
    return result;
}

struct real
div_real_real(struct real x, struct real y) // returns real x /real y
{
    struct real result ;
    result.val=(((int64_t)x.val)*Delta)/y.val;
    return result;
}

struct real
div_real_int(struct real x, int n) // returns real x / int n
{
    struct real result ;
    result.val= (x.val) /n;
    return result;
};

/*int main(){
   struct real t;
   printf("%d\n",t.val);
    return 0;

}*/