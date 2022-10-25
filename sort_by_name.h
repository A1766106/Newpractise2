#ifndef SORT_BY_NAME_H
#define SORT_BY_NAME_H
#include "sort_by_animalID.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

class sort_by_name{
      public:
        static void sort(animal **animals,int n);
};

#endif