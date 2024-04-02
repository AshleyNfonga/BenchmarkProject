#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

void RunCalculations(){
    int result;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < pow(10,9); j++){
            result = 1 + 1;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < pow(10,9); j++){
            result = 1 * 1;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < pow(10,9); j++){
            result = 1 / 1;
        }
    }
}

int main(){

    auto start = high_resolution_clock::();

    RunCalculations();

    auto stop = high_resolution_clock::now();
}