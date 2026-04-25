//COMSC 210 | Lab 32 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
using namespace std;

const int Size = 2;

int main() {

    deque<Car> line;

    for (int i = 0; i < Size; i++){
        Car c = Car();
        line.push_back(c);
    }

    for (int i = line.size(); i > 0; i++) {
        
        line.pop_front();
    }

    return 0;
}