#ifndef __FP8_HH
#define __FP8_HH

#include "fp8_types.h"

class FP8
{
private:
    FP8_UTYPE bits;
    FP8_TYPE type;

public:
    FP8(FP8_UTYPE bits, FP8_TYPE type);
    FP8(FP8_TYPE type);

    bool isZero() const;
    bool isNeg() const;
    bool isNan() const;

    int bias() const;

    FP8 zero() const;

    FP8 neg() const;
    FP8 abs() const;

    FP8 add(const FP8& f) const;        // x + f
    FP8 sub(const FP8& f) const;        // x - f
    FP8 mul(const FP8& f) const;        // x * f
    FP8 div(const FP8& f) const;        // x / f

    bool eq(const FP8& f) const;        // x == f
    bool gt(const FP8& f) const;        // x > f
    bool ge(const FP8& f) const;        // x >= f
    bool lt(const FP8& f) const;        // x < f
    bool le(const FP8& f) const;        // x <= f

    void set(FP8 f);                    // x = f
    void set(float n);                  // x = n
    void set(double n);                 // x = n

    float getFloat() const;             // n = x
    double getDouble() const;           // n = x

    // debug
    void setBits(FP8_UTYPE bits);
    FP8_UTYPE getBits() const;
    void print() const;
};

#endif
