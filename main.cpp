//COMSC 210 | Lab 33 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
#include <iomanip>
using namespace std;

const int Size = 2, W = 15, LANES = 4, runs = 20, prob1 = 15, prob2 = 39;

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
    for (int t = 0; t < runs; t++){
        cout << "Time: " << t+1 << endl;
        for (int i = 0; i < LANES; i++) {
            int r = rand()%100;
            cout << "Lane " << i+1;
            if (r < prob1) {
                if (!line[i].empty()) {
                    cout << " Switched: ";
                    Car c = line[i][line[i].size()-1];
                    c.print();
                    line[i].pop_back();
                    int lane = rand()%4;
                    //ensures the car switches to another lane
                    while (lane = i) {
                        lane = rand()%4;
                    }
                    line[lane].push_back(c);
                } else {cout << "empty";}
            }
            else if (r < (prob1 + prob2)) {
                cout << " Joined: ";
                Car c = Car();
                line[i].push_back(c);
                c.print();
            }
            else {
                cout << " Paid: ";
                if (!line[i].empty()) {
                    line[i][0].print();
                    line[i].pop_front();
                }
                else {cout << "empty";}
            }
        }

        //outputs current data
        cout << endl << "Queue:" << endl;
        for (int i = 0; i < LANES; i++) {
            cout << "Lane " << i+1 << ":" << endl;
            if (line[i].empty()) {
                cout << setw(W) << "empty" << endl;
            } else {
                for (int j = 0; j < line[i].size(); j++) {
                    cout << setw(W);
                    line[i][j].print();
                    cout << endl;
                }
            }
        }
    }

    return 0;
}