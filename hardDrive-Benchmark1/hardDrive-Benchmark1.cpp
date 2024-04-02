#include <chrono>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;
using namespace std::chrono;

void HardDriveBenchmark1(){
    fstream file;

    file.open("file.txt", ios::out | ios::app | ios::binary);

    int loop = pow(10, 7);

    for(int i = 0; i < loop; i++){

    }

    file.seekg(0);

    for(int i = 0; i < loop; i++){

    }

}
