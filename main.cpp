//COMSC 210 | Lab 32 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
using namespace std;

const int Size = 2;

int main() {
    srand(time(0));
    //decalres a deque for Car
    deque<Car> line;

    //fills the deque with data
    for (int i = 0; i < Size; i++){
        Car c = Car();
        line.push_back(c);
    }

    //outputs data
    cout << "Initial queue:" << endl;
    for (int i = 0; i < line.size(); i++) {
        if (!line.empty()) {
            line[i].print();
        }
    }
    cout << endl;

    for (int i = line.size(); i > 0; i--){
        cout << "Time: " << (line.size() - i)+1 << endl;
        int r = rand()%100;
        if (!line.empty()) {
            if (r < 45) {
                Car c = Car();
                line.push_back(c);
                c.print();
                cout << " joins the line" << endl;
            }
            else {
                line[0].print();
                line.pop_front();
                cout << " pays its toll and leaves" << endl;
            }
        }
    }

    return 0;
}