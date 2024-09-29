#include <benchmark/benchmark.h>
#include "my_add.hpp" 

// Бенчмарк для функции my_add
static void BM_my_add(benchmark::State& state) {
    for (auto _ : state) {
        my_add(3, 10);  // Пример использования функции
    }
}
BENCHMARK(BM_my_add);

BENCHMARK_MAIN();  // Точка входа для Google Benchmark
