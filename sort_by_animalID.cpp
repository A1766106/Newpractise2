#include "sort_by_animalID.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

void sort_by_animalID::sort(animal **animals,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(animals[j]->get_animalID() > animals[j+1]->get_animalID())
            {
                animal *temp = animals[j];
                animals[j] = animals[j+1];
                animals[j+1] = temp;

            }
        }

    }  
}
