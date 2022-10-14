#ifndef __FP8_UTILS_H
#define __FP8_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "fp8_types.h"

#define LSHIFT(bits, shift) \
    ((shift) >= (int)(8 * sizeof(bits)) ? 0 : (bits) << (shift))

#define RSHIFT(bits, shift) \
    ((shift) >= (int)(8 * sizeof(bits)) ? 0 : (bits) >> (shift))

#define POW2(n) \
    (LSHIFT(1, (n)))

#define FLOORDIV(a, b) \
    ((a) / (b) - ((a) % (b) < 0))

#define MIN(a, b) \
    ((a) < (b) ? (a) : (b))

#define MAX(a, b) \
    ((a) > (b) ? (a) : (b))

#define LMASK(bits, size) \
    ((bits) & LSHIFT(FP8_MASK, FP8_WIDTH - (size)))

#define LHIDE(bits, size) \
    ((bits) & RSHIFT(FP8_MASK, size))

#define HIDDEN_BIT(frac) \
    (FP8_MSB | RSHIFT((frac), 1))

#ifdef __cplusplus
}
#endif

#endif
