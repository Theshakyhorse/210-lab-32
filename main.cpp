//COMSC 210 | Lab 33 | Alexander Sierra
#include <iostream>
#include "Car.h"
#include <deque>
#include <iomanip>
using namespace std;

const int Size = 2, W = 15, LANES = 4;

//I commented out a lot of stuff becuase it breaks
//and I can't check if the array of deques works
int main() {
    srand(time(0));
    //declaration of array of deques
    deque<Car> line[LANES];

    //fills with data
    for (int i = 0; i < LANES; i++){
        Car c = Car();
        line[i].push_back(c);
    }

    //outputs data
    cout << "Initial queue:" << endl;
    for (int i = 0; i < LANES; i++) {
        if (!line[i].empty()) {
            cout << setw(W);
            line[i][0].print();
            cout << endl;
        }
    }
    
    int i = 1;
    //performs probability based actions until deque is empty
    //while (!line.empty()){
        //cout << "Time: " << i << " Operation: ";
        //int r = rand()%100;
        //if (!line.empty()) {
            //if (r < 45) {
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
        //outputs current data in deque
        //cout << endl << "Queue:" << endl;
        //if (!line.empty()) {
            //for (int i = 0; i < line.size(); i++) {
                //if (!line.empty()) {
                    //cout << setw(W);
                    //line[i].print();
                    //cout << endl;
                //}
            //}
        //}
        //else {
            //cout << setw(W) << "Empty" << endl;
        //}
        //i++;
    //}

    return 0;
}