#include "fp8.hh"

#include <cstdio>

int main(int argc, char *argv[])
{
    auto p = FP8(e4m3);

    for (unsigned i = 0; i < (unsigned)(1 << 8); i++) {
        p.setBits(i);
        p.print();
    }

    return 0;
}
