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

    int i = 1;
    //performs probability based actions until deque is empty
    while (!line.empty()){
        cout << "Time: " << i << " Operation: ";
        int r = rand()%100;
        if (!line.empty()) {
            if (r < 45) {
                Car c = Car();
                line.push_back(c);
                cout << "joined lane: ";
                c.print();
            }
            else {
                cout << "Car paid: " << endl;
                line[0].print();
                line.pop_front();
            }
            cout << endl << "Queue:" << endl;
            for (int i = 0; i < line.size(); i++) {
                if (!line.empty()) {
                    line[i].print();
                }
            }
        }
        i++;
        cout << endl;
    }

    return 0;
}