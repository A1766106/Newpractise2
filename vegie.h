#ifndef VEGIE_H
#define VEGIE_H
#include "hunter.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class vegie: public animal{
    private:
        string favourite_food ;     // the vegie's favourite food, initialise to "grass"
        static int nextID ;
    public:
        vegie(string n,int v);      // create a vegie with name n and body volume v
        void set_favourite_food(std::string f);
        std::string get_favourite_food();
        std::string get_name();
};

#endif