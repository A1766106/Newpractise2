#include "hunter.h"
#include "vegie.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int vegie::nextID = 100;

vegie::vegie(string n,int v)
{
    name = n;
    volume = v;
    animalID = nextID;
    nextID++;
    favourite_food = "grass";
}
void vegie::set_favourite_food(std::string f)
{
    favourite_food = f;
}
std::string vegie::get_favourite_food()
{
    return favourite_food;
}
std::string vegie::get_name()
{
    return "Safe: "+name;
}