#include <chrono>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;
using namespace std:: chrono;

void HardDriveBenchmark1(char * txt){
    fstream file;

    file.open("file.txt", ios::out | ios::app | ios::binary);

    int loop = pow(10, 5);

    for(int i = 0; i < loop; i++){
        file.write(txt, 10000);
    }
    file.seekg(0);
    for(int i = 0; i < loop; i++){
       file.read(txt, 1000);
    }
    file.close();
 }