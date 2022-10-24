#include "hunter.h"
#include "animal.h"
#include <iostream>
#include <string>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v)
{
    name = n;
    volume = v;
    kills = 0;
    animalID = nextID;
    nextID++;

}
void hunter::set_kills(int k)
{
    kills = k;
}
int hunter::get_kills()
{
    return kills;
}
string hunter::get_name()
{
    return "Hunter: "+name;
}