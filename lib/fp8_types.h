#ifndef __FP8_TYPES_H
#define __FP8_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#define FP8_LUTYPE    uint16_t
#define FP8_UTYPE     uint8_t
#define FP8_STYPE     int8_t
#define FP8_WIDTH     8
#define FP8_ZERO      ((FP8_UTYPE)0x00)
#define FP8_MAX       ((FP8_UTYPE)0x7F)
#define FP8_MIN       ((FP8_UTYPE)0x01)
#define FP8_MSB       ((FP8_UTYPE)0x80)
#define FP8_MASK      ((FP8_UTYPE)0xFF)

typedef enum {
    e4m3 = 4,
    e5m2
} FP8_TYPE;

typedef struct {
    bool    sign     : 1;
    uint8_t exponent : 4;
    uint8_t mantissa : 3;
} FP8_E4M3;

typedef struct {
    bool    sign     : 1;
    uint8_t exponent : 5;
    uint8_t mantissa : 2;
} FP8_E5M2;

typedef union {
    FP8_UTYPE fp8_bits;
    FP8_E4M3 fp8_e4m3;
    FP8_E5M2 fp8_e5m2;
} UnFP8;

#ifdef __cplusplus
}
#endif

#endif
