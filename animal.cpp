#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

animal::animal(){}

animal::animal(string n, int v)
{
    name = n;
    volume = v;
}
void animal::set_name(string n)
{
    name = n;
}
void animal::set_volume(int v)
{
    volume = v;
}
int animal::get_animalID()
{
    return animalID;
}
int animal::get_volume()
{
    return volume;
}