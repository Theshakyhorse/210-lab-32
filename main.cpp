//COMSC 210 | Lab 33 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
#include <iomanip>
using namespace std;

const int Size = 2, W = 15, LANES = 4, runs = 20, prob = 50;

int main() {
    srand(time(0));
    //declaration of array of deques
    deque<Car> line[LANES];

    //fills with data
    for (int i = 0; i < LANES; i++){
        for (int j = 0; j < Size; j++) {
            line[i].push_back(Car());
        }
    }

    //outputs data
    cout << "Initial queue:" << endl;
    for (int i = 0; i < LANES; i++) {
        cout << "Lane " << i+1 << ":" << endl;
        for (int j = 0; j < Size; j++) {
            if (!line[i].empty()) {
                cout << setw(W);
                line[i][j].print();
                cout << endl;
            }
        }
    }
    
    //performs probability based actions for 20 time periods
    for (int t = 0; t < 20; t++){
        cout << "Time: " << t+1 << " Operation: ";
        
        int r = rand()%100 +1;
        //if (!line.empty()) {
            //if (r <= prob) {
                //Car c = Car();
                //line.push_back(c);
                //cout << "joined lane: ";
                //c.print();
            //}
            //else {
                //cout << "Car paid: ";
                //line[0].print();
                //line.pop_front();
            //}
        //}
        //outputs current data
        //cout << endl << "Queue:" << endl;
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i+1 << ":" << endl;
            for (int j = 0; j < Size; j++) {
                if (!line[i].empty()) {
                    cout << setw(W);
                    line[i][j].print();
                    cout << endl;
                }
                else {cout << setw(W) << "empty" << endl;}
            }
        }
    }

    return 0;
}