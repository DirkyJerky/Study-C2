#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "common.h"
#define MAX_BUF 512

class vehicle {
    private:
        int numWheels;
        int range;

    public:
        vehicle(int w, int r) {
            numWheels = w;
            range = r;
        }

        void showv() {
            demo_int(numWheels);
            demo_int(range);
        }
};

enum motor {
    gas,
    electric,
    diesel
};

class motorized : virtual public vehicle {
    private:
        enum motor mtr;

    public:
        motorized(enum motor m, int w, int r) : vehicle (w, r) {
            mtr = m;
        }

        void showm() {
            switch(mtr) {
                case gas:
                    println("Motor: Gas");
                    break;

                case electric:
                    println("Motor: Electric");
                    break;

                case diesel:
                    println("Motor: Diesel");
                    break;

            }
        }
};

class roadUse : virtual public vehicle {
    private:
        int passengers;

    public:
        roadUse(int p, int w, int r) : vehicle(w, r) {
            passengers = p;
        }

        void showr() {
            demo_int(passengers);
        }
};

enum steering {
    power,
    rackPinion,
    manual
};

class car : public motorized, public roadUse {
    private:
        enum steering strng;

    public:
        car(enum steering s, enum motor m, int w, int r, int p) : roadUse(p, w, r), motorized(m, w, r), vehicle(w, r) {
            strng = s;
        }

        void show() {
            showv();
            showr();
            showm();

            switch(strng) {
                case power:
                    println("Steering: Power");
                    break;

                case rackPinion:
                    println("Steering: Rack and Pinion");
                    break;

                case manual:
                    println("Steering: Manual");
                    break;

            }
        }
    
};

int main(int argc, char *argv[]) {
    car *iCar;

    demo_void(iCar = new car(power, gas, 4, 500, 5));
    demo_void(iCar->show());

    
}
