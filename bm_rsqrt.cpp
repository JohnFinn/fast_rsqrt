#include <benchmark/benchmark.h>
#include "rsqrt.hpp"
#include <random>

static void BM_rsqrt(benchmark::State& state)
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<float> dis{0.1, 100000};
    for (auto _: state) {
        //state.PauseTiming();
        //float num = dis(gen);
        //state.ResumeTiming();
        rsqrt(123.6789);
    }
}

static void BM_fast_rsqrt(benchmark::State& state)
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<float> dis{0.1, 100000};
    for (auto _: state) {
        //state.PauseTiming();
        //float num = dis(gen);
        //state.ResumeTiming();
        fast_rsqrt(123.6789);
    }
}

BENCHMARK(BM_rsqrt);
BENCHMARK(BM_fast_rsqrt);

BENCHMARK_MAIN();