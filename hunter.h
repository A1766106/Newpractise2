#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class hunter: public animal{
    private:
        static int nextID ;
        int kills ;               // how many kills have been recorded, initialised to 0
    public:
        hunter(string n, int v);  // create a hunter with name n and body volume v
        void set_kills(int k);
        int get_kills();
        string get_name();
};

#endif