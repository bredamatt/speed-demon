// Remember to use gcc compiler

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <x86intrin.h>

static const int kIterations = 1000 * 1000000;

int main (int argc, const char** argv) {
    uint64_t startcy, stopcy;
    uint64_t sum = 0;

    startcy = __rdtsc();
    
    for (int i = 0; i < kIterations; ++i) {
        sum +=1;
    }

    stopcy = __rdtsc();

    int64_t elapsed = stopcy - startcy;
    double felapsed = elapsed;

    // This tries to make sum live
    // bool nevertrue = (time(NULL) == 0);
    // if (nevertrue) {
    //     fprintf(..., sum)
    // }

    fprintf(stdout, "%d iterations, %lu cycles, %4.2f cycles/iteration\n",
            kIterations, elapsed, felapsed / kIterations);

    return 0;
}