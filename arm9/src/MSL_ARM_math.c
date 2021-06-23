#include "global.h"
#include "MSL_ARM_math.h"

#pragma exceptions on

extern double _f2d(float);
extern float __float_nan;

ARM_FUNC double nan(const char *arg)
{
    return _f2d(__float_nan);
}
