#include "fp8.hh"
#include "utils.h"

#include <cstdio>
#include <cmath>

using namespace std;

FP8::FP8(FP8_UTYPE bits, FP8_TYPE type) :
    bits(bits),
    type(type)
{
}

FP8::FP8(FP8_TYPE type) :
    FP8::FP8(FP8_ZERO, type)
{
}

void FP8::setBits(FP8_UTYPE bits)
{
}

void FP8::print() const
{
}
