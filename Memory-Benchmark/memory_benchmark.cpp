#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

#define ARRAY_SIZE 1000000000

void MemoryBenchmark(){
    int *nums = new int[ARRAY_SIZE];
    int num, i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < ARRAY_SIZE; j++){
            num = *(nums + j);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < ARRAY_SIZE; j++){
            *(nums + j) = 1;
        }
    }

    delete [] nums;
}

int main(){

    auto start = high_resolution_clock::now();

    MemoryBenchmark();

    auto stop = high_resolution_clock::now();
}