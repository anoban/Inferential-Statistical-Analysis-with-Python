#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include <string.h>

#define POPSIZE 1000000LU
#define SSIZE 1000LU
#define NSAMPLES 2000LU
#define DEFAULT_TVAL 1.962L

int main(int argc, char* argv[]) {

    // If arguments are passed, only one can be passed.
    if (argc != 1) assert(argc == 2);
    const long double T = (argc == 2) ? strtold(argv[1], NULL) : DEFAULT_TVAL;

    // Population
    int rands[POPSIZE];
    long double pop_mean = 0.0;
    for (uint64_t i = 0; i < POPSIZE; ++i) pop_mean += rands[i] = rand();
    pop_mean /= POPSIZE;
    printf_s("Population mean is %.10Lf\n", pop_mean);

    long double smeans[NSAMPLES] = { 0.0L };
    long double sstdvs[NSAMPLES] = { 0.0L };
    int sample[SSIZE];

    for (uint64_t i = 0; i < NSAMPLES; ++i) {
        for (uint64_t j = 0; j < SSIZE; ++j) smeans[i] += sample[j] = rands[(rand() % POPSIZE)];
        smeans[i] /= SSIZE;
    }

    for (uint64_t i = 0; i < NSAMPLES; ++i) {
        for (uint64_t j = 0; j < SSIZE; ++j) sstdvs[i] += powl((sample[j] - smeans[i]), 2);
        sstdvs[i] = sqrtl(sstdvs[i] / (SSIZE - 1));
        // printf_s("Sample %llu: standard deviation %.10Lf\n", i, sstdvs[i]);
    }

    uint64_t ncoverages = 0;
    long double moerr = 0.0;

    for (uint64_t i = 0; i < NSAMPLES; ++i) {
        moerr = (T * sstdvs[i] / sqrtl(SSIZE));
        ncoverages += ((smeans[i] - moerr) <= pop_mean && ((smeans[i] + moerr) >= pop_mean));
    }

    printf_s("%.2Lf %% of the confidence intervals contained the population mean (t = %.5Lf)!\n",
        ((long double) ncoverages) / NSAMPLES * 100, T);

    return 0;
}