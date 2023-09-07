#pragma once

#include <vector>
#include "Continent.h"

class AnimalWorld
{
private:
    vector<iContinent*> continents;

public:
    void AddContinent(iContinent* continent);
    void MealsHerbivores();
    void NutritionCarnivores();
};
