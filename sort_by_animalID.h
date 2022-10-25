#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class sort_by_animalID{
    public:
        static void sort(animal **animals,int n);
};

#endif