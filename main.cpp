//COMSC 210 | Lab 32 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
using namespace std;

const int Size = 2;

int main() {
    //decalres a deque for Car
    deque<Car> line;

    //fills the deque with data
    for (int i = 0; i < Size; i++){
        Car c = Car();
        line.push_back(c);
    }

    //outputs data
    for (int i = 0; i < line.size(); i++) {
        if (!line.empty()) {
            line[i].print();
        }
    }

    return 0;
}